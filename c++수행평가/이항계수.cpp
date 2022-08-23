#include <iostream>

using namespace std;

int n, r, memo[31][31];

int func(int n, int r){
	if(memo[n][r] != 0) return memo[n][r];
	if(r == 0 || r == n) return 1;
	memo[n][r] = func(n-1, r-1) + func(n-1, r);
	return memo[n][r];
}

int main(){
	cin>>n>>r;
	cout<<func(n, r)<<endl;
	return 0;
} 
