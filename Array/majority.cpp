/*PROBLEM : https://practice.geeksforgeeks.org/problems/majority-element/0
Write a program to find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).  If input array doesn't contain a majority element, then output "NO Majority Element"

Input:  The first line of the input contains T denoting the number of testcases. The first line of the test case will be the size of array and second line will be the elements of the array.
Output: For each test case the output will be the majority element of the array.
*/
#include <bits/stdc++.h>
using namespace std;

void inputArr(int *arr, int N){
    for(int i = 0; i < N; ++i){
        cin>>arr[i];
    }
}

int candidateForMajorityElement(int *arr, int N){
    int maxElementIndex = 0, count = 1; 
    for(int i = 1; i < N; ++i){
        if(arr[maxElementIndex] == arr[i])
            ++count;
        else
            --count;
            
        if(count == 0){
            count = 1;
            maxElementIndex = i;
        }
    }
    return arr[maxElementIndex];
}

bool isMajority(int *arr, int N, int candidate){
    int count = 0;
    for(int i = 0; i < N; ++i){
        if(candidate == arr[i])
            ++count;
    }
    if(count > N/2.0)
        return 1;
    else
        return 0;
}

int main() {
	int T, N;
	int candidate;
	bool result;
	cin >> T;
	for(int i = 0; i < T; ++i){
	    cin >> N;
	    int arr[N];
	    inputArr(arr, N);
	    candidate = candidateForMajorityElement(arr, N);
	    result = isMajority(arr, N, candidate);
	    if(result == 1)
	        cout << candidate << "\n";
	    else
	        cout << "NO Majority Element\n";
	}
	
	return 0;
}
