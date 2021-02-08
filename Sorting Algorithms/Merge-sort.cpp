/*
	Merge Sort
	Time Complexity:
		Worst: O(nlog(n));
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

void merge(int arr[], int l, int m, int r){
	int n1 = m-l+1;
	int n2 = r-m;

	int L[n1], R[n2];
	for(int i=0;i<n1;i++){
		L[i] = arr[l+i];
	}
	for(int j=0;j<n2;j++){
		R[j] = arr[m+1+j];
	}

	int i=0, j=0, k=l;

	while(i<n1 && j<n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r){
	if(l>=r){
		return;
	}
	int m = l+(r-l)/2;
	mergeSort(arr, l,m);
	mergeSort(arr, m+1, r);
	merge(arr, l, m, r);
}


int main(){
    int arr[] = {89,12, 1, 43, 12, 13, 12, 99,34354};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n-1);
    cout<<"Sorted Array"<<endl;
    printArr(arr,n);
    return 0;
}
