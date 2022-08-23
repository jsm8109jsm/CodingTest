#include <iostream>

using namespace std;

int n,target[500],memo[500];

int Func(int start){
	if(memo[start]) return memo[start];
	int ret=1;
	for(int i=start+1; i<n; i++){
		if(target[start] < target[i]){
			ret = max(ret, Func(i)+1);
		}
	}
	return ret;
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>target[i];
	}
	int ret=0;
	for(int i=0; i<n; i++){
		ret = max(ret, Func(i));
	}
	cout<<ret<<endl;
	return 0;
}
