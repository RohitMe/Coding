/* URL: https://practice.geeksforgeeks.org/problems/key-pair/0
Given an array A[] of n numbers and another number x, determine whether or not there exist two elements in A whose sum is exactly x.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and X,N is the size of array.
The second line of each test case contains N integers representing array elements C[i].

Output:

Print "Yes" if there exist two elements in A whose sum is exactly x, else "No" without quotes
*/

#include <bits/stdc++.h>
using namespace std;


void inputArr(int *arr, int N, unordered_set<int> &SumPair){
    for(int i = 0; i < N ; ++i){
        cin >> arr[i];
        SumPair.insert(arr[i]);
    }
}

void printPair(int *arr, int N, unordered_set<int> &SumPair, int sum){
    int temp;
    for(int i = 0; i < N ; ++i){
        temp = sum - arr[i];
        if(temp >= 0 && SumPair.find(temp) != SumPair.end()){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main() {
	int T, N , X;
	cin>>T;
	for(int i = 0; i < T; ++i){
	    unordered_set<int> SumPair; 
	    cin >> N >> X;
	    int arr[N];
	    inputArr(arr , N , SumPair);
	    printPair(arr, N, SumPair, X);
	}
	return 0;
}
