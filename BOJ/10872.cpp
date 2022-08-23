#include <iostream>
using namespace std;

int memo[20];
int f(int a){
	if(memo[a] != 0) return memo[a];
	if(a<=2) return 1;
	memo[a] = f(a-1) + f(a-2);
	return memo[a];
}

int main(){
	int n;
	cin>>n;
	n==0?cout<<0<<endl:cout<<f(n)<<endl;
}
