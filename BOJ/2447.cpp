#include <iostream>
using namespace std;

void t(int n){
	int i,j;
	t(n/3);
	if(n==1){
		for(i=0; i<n*3; i++){
			for(j=0; j<n*3; j++){
				if(i != n)
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	t(n);
	return 0;
}
