/*
	Selection Sort
	Time Complexity:
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

void selectionSort(int arr[], int n){
	int min_idx, i,j;
	for(int i=0;i<n;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		swap(&arr[min_idx], &arr[i]);
	}
	
}


int main(){
    int arr[] = {89,12, 1, 43, 12, 13, 12, 99,34354};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<<"Sorted Array"<<endl;
    printArr(arr,n);
    return 0;
}
