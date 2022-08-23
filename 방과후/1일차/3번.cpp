#include <iostream>
using namespace std;
int main() {
	int n,count=0;
	cin>>n;
	count++;
	cout<<count;
	for(int i=2; i<=n; i++){
		if(n%i==0 && i!=n){
			count += i;
			cout<<" + "<<i;
		}
	}
	cout<<" = "<<count;
	return 0;
}
