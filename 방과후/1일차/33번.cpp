#include <iostream>
using namespace std;
int main() {
	int n, arr[101], third = 1;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<< " ";
	}
//	for(int i=0; i<n; i++){
//		if(arr[i] != arr[i+1]){
//			third++;
//		}
//		if(third == 3){
//			cout<<arr[i];
//		}
//	}
	return 0;
}
