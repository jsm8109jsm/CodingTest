#include <iostream>

using namespace std;

int n, list[10], sorted[10];

void Merge(int left, int mid, int right){
	int i=left;
	int j=mid+1;
	int k=left;
	
	while(i<=mid && j<=right){
		if(list[i]<list[j]){
			sorted[k++] = list[i++];
		}
		else{
			sorted[k++] = list[j++];
		}
	}
	
	int temp = i>mid?j:i;
	
	while(k<=right){
		sorted[k++] = list[temp++];
	}
	
	for(int a=left; a<=right; a++){
		list[a] = sorted[a];
	}
}

void MergeSort(int left, int right){
	int mid = (left+right)/2;
	if(left<right){
		MergeSort(left, mid);
		MergeSort(mid+1, right);
		Merge(left, mid, right);
	}
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>list[i];
	}
	MergeSort(0, n-1);
	for(int i=0; i<n; i++){
		cout<<list[i]<<" ";
	}
	return 0;
}
