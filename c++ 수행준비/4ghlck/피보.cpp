#include <iostream>

using namespace std;

int memo[20], n;

int Func(int n){
	if(memo[n]) return memo[n];
	if(n<=2) return 1;
	memo[n] = Func(n-1) + Func(n-2);
	return memo[n];
}

int main(){
	cin>>n;
	cout<<Func(n)<<endl;
	return 0;
}
