#include <iostream>

using namespace std;

int n, arr[10], sorted[10]; 

void Merge(int left, int mid, int right){
	int i=left;
	int j=mid+1;
	int k=left;
	
	while(i<=mid&&j<=right){
		if(arr[i]<arr[j]){
			sorted[k++] = arr[i++];
		}
		else{
			sorted[k++] = arr[j++];
		}
	}
	
	int temp = i>mid?j:i;
	
	while(k<=right){
		sorted[k++] = arr[temp++];
	}
	
	for(int a=left; a<=right; a++){
		arr[a] = sorted[a];
	}
	return; 
}

void MergeSort(int left, int right){
	int mid = (left+right)/2;
	if(left<right){
		MergeSort(left, mid);
		MergeSort(mid+1, right);
		Merge(left, mid, right);
	}
	return;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	MergeSort(0, n-1);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
