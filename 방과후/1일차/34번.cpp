#include <iostream>
using namespace std;
int main() {
	int n, arr[101];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(arr[i]<arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[i];
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
