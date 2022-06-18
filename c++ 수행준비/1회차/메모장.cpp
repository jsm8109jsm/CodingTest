#include <iostream>
using namespace std;

int n;
int target[500];
int memo[500];
int lis2(int start)
{
	if(memo[start] != 0) return memo[start];
	int ret = 1;
	for(int i=start+1; i<n; i++){
		if(target[start] < target[i]){
			ret = max(ret, 1 + lis2(i));
		}
	}
	memo[start] = ret;
	return memo[start];
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>target[i];
	}
	int ret=0;
	for(int i=0; i<n; i++){
		ret = max(ret, lis2(i));
	}
	cout<<ret<<endl;
	return 0;
} 
