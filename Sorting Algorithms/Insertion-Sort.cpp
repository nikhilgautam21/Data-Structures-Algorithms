/*
	Insertion Sort
	Time Complexity:
		Best: O(n)
		Worst: O(n*n);
	Sorting InPlace: Yes

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
#define pb push_back
#define PI 3.1415926535897932384626

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void printArr(int arr[], int n){
	fo(i,n){
		cout<<arr[i]<<" ";
	}
}

void insertionSort(int arr[], int n){
	int key,j;
	for(int i=1;i<n-1;i++){
		key = arr[i];
		j = i-1;
		while(j>=0 &&  arr[j] >key){
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}	
}


int main(){
    int arr[] = {89,12, 1, 43, 12, 13, 12, 99,34354};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout<<"Sorted Array"<<endl;
    printArr(arr,n);
    return 0;
}
