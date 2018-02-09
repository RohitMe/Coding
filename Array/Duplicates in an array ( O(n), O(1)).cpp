/*
PROBLEM: https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
Given an array A[], Your task is to complete the function printDuplicates which prints the duplicate elements of the given array. If no duplicate element is found  print -1.

Note: Auxiliary Space must be O(1) and Time complexity must be O(n).

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N which denotes number of elements of Array. Second line of each test case contains N space separated integers denoting elements of Array A[].

Output:
Print the duplicate elements from the array.

Constraints:
1<=T<=100
1<=N<=50
0<=A[]<=N

Example:
Input:
2
4
0 3 1 2
25
6 23 8 19 13 22 9 23 16 8 2 11 22 1 15 1 22 22 8 5 11 19 8 11 5
 
Output:
-1
23 8 22 1 11 19 5 

*/

#include <bits/stdc++.h>
using namespace std;


/*
Keep increasing the value at the index of the repeted value means if 3 is repeated then value at index 3 will be increase by size. 
therefor, for every occurence of 3 the value will be increased,thus when /size if the value is > 1 then it occures more than 1
*/

void arrIncrease(int *arr, int n) {
    for(int i = 0; i < n; ++i) {
/*% is used as the size might be increased depending to the number of occurence of the index value*/
        int index = arr[i] % n;
        arr[index] += n;
    }
}

void checkRepeat(arr, n) {
/* Just go to the position of the index value just like we add size*/
    int index = (abs(arr[i]))%n;
    if(abs(arr[i])/n > 1){
/*Value i.e., arr[i] if occure more than 1 times*/
        if(arr[index] < 0){
/*The value will be negative as well as value/n > 1 only when the number is repeated and this number occured 2nd time*/
            cout << index << " ";
/*as the element is printed so % it, so if calcuated arr[i]/n will never be > 1 so if same element occure it will be look like 
it does not occure more than 1 time */
            arr[index] = -(abs(arr[index])%n);
            flag = 0;    
        }
        else{
/* else will be executed when the number occured more than 1, and first time it was traveresd therefor negate it so than next time
which is 2nd time we can find out it is negative then print the value and then reduce so that no one will print it*/
                arr[index] = -arr[index];
        }    
    
            
    }
}

void printDuplicate(int *arr, int n) {
    arrIncrease(arr, n);
    checkRepeat(arr, n);
}

void inputArr(int *arr, int n) {
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

int main() {
	//code
  int n;
  cin >> n;
  int arr[n];
  inputArr(arr, n);
  printDuplicate(arr, n);
	return 0;
}
