#include <iostream>
using namespace std;

int main(){
	int n,arr[1000],i,temp,j;
	cin>>n;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	for(i=0; i<n; i++){
		if(arr[i]>arr[i+1]){
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i+1]=temp;
		}
	}
	for(i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
}
