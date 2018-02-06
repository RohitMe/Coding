/* URL: https://practice.geeksforgeeks.org/problems/find-the-odd-occurence/0
Given an array of positive integers. All numbers occur even number of times except one number which occurs odd number of times. Find the number.

Expected Time Complexity: O(n)
Expected Auxiliary Space​: Constant

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines.

The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array elements.

*/



#include <bits/stdc++.h>
using namespace std;

void inputArr(int *arr, int N, unordered_map<int, int> &numberFreq){
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
        numberFreq[arr[i]]++;
    }
}

int oddOccurence(int *arr, int N, unordered_map<int, int> &numberFreq){
    unordered_map<int, int>:: iterator p;
    for(p = numberFreq.begin(); p != numberFreq.end(); ++p)
        if((p->second)%2 != 0)
            return p->first;
    
    return 0;
}

int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; ++i){
	    int N, OddNum;
	    cin >> N;
	    int arr[N];
	    unordered_map<int, int> numberFreq;
	    inputArr(arr, N, numberFreq);
	    OddNum = oddOccurence(arr, N, numberFreq);
	    cout << OddNum << "\n";
	    
	}
	return 0;
}
