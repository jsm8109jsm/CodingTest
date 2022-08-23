#include <iostream>
using namespace std;
int n, count;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++){
		int a = i;
		while(a>0){
			a/=10;
			count++;
		}
	}
	cout<<count;
	return 0;
}
