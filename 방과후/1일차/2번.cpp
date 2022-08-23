#include <iostream>
using namespace std;
int main() {
	int a,b,sum=0;
	cin>>a>>b;
	for(int i=a; i<=b; i++){
		cout<<i;
		sum+=i;
		if(i!=b){
			cout<<" +";
		}
		else{
			cout<<" = "<<sum;
		}
	}
	return 0;
}
