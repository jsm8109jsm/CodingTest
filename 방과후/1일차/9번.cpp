#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i] = 0;
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0) arr[i-1]++;
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
