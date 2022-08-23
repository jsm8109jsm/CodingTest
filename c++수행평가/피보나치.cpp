#include <iostream>

using namespace std;

int memo[30];
int fibo(int a){
	if(memo[a] != 0) return memo[a];
	if(a<=2) return 1;
	memo[a] = fibo(a-1) + fibo(a-2);
	return memo[a];
}

int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
}
