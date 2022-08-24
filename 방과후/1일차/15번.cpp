#include <iostream>
using namespace std;
int main() {
	int n, count=0;
	cin>>n;
	for(int i=2; i<=n; i++){
		for(int j=2; j<i; j++){
			if(i%j==0){
				count++;
				cout<<i<<endl; 
				break;
			}
		}
	}
	cout<<n-count-1;
	return 0;
}
