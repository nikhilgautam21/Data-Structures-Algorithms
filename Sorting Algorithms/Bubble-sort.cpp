/*
	Bubble Sort
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

void bubbleSort(int arr[], int n){
	// Using swap variable to check if no useless iteration happens
	bool swapped;
	for(int i=0;i<n-1;i++){
		swapped = false;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if(!swapped){
			break;
		}
	}
}


int main(){
    int arr[] = {89,12, 1, 43, 12, 13, 12, 99,34354};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted Array"<<endl;
    printArr(arr,n);
    return 0;
}
