#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int a,b, count=0;
		cin>>a>>b;
		for(int j=1; j<=a; j++){
			count+=j;
		}
		b == count?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
