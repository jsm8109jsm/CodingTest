#include <iostream>
using namespace std;

int count;
int main(){
	int i,j,n,arr[25][25];
	string a[25];
	cin>>n;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cin>>(a[i])[j];
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			arr[i][j] = (a[i])[j];
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(arr[i][j]-48 == 1){
				cout<<"["<<i<<", "<<j<<"]"<<endl;
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
