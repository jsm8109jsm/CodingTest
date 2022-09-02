#include <iostream>
using namespace std;
int main() {
	int n, arr[100],count=0;
	bool isShort = false;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		isShort = false;
		for(int j=i; j<n; j++){
			if(arr[i]<arr[j]){
				isShort = false;
				break;
			}
			else{
				isShort = true;
			}
		}
		if(isShort){
				cout<<arr[i]<<endl;
			count++;
		} 
	}
	cout<<count-1;
	return 0;
}
