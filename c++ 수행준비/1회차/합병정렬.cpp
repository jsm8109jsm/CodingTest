#include <iostream>

using namespace std;

int list[100], sorted[100];

void Merge(int left, int mid, int right){
	int i=left;
	int j=mid+1;
	int k=left; //중요
	
	while(i<=mid && j<=right){ //중요
		if(list[i]<list[j]){
			sorted[k++] = list[i++]; //중요
		}
		else{
			sorted[k++] = list[j++]; //중요
		}
	}
	
	int temp;
	temp = i>mid?j:i; //중요
	
	while(k<=right){
		sorted[k++] = list[temp++]; //중요
	}
	
	for(int a=left; a<=right; a++){
		list[a] = sorted[a]; //중요
	}
}

void MergeSort(int left, int right){
	int mid = (left+right)/2; //중요
	if(left<right){
		MergeSort(left, mid);
		MergeSort(mid+1, right);
		Merge(left, mid, right);
	}
}

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> list[i];
	}
	MergeSort(0, n-1);
	for(int i=0; i<n; i++){
		cout<<list[i]<<" ";
	}
}
