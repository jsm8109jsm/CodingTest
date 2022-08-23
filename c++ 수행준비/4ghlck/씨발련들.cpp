#include <iostream>
using namespace std;

int cost[21], prefer[21], memo[1000001], n, budget;

int Func(int capa){
	if(memo[capa]) return memo[capa];
	for(int i=0; i<n; i++){
		if(capa+cost[i]<=budget){
			memo[capa] = max(memo[capa], Func(capa+cost[i])+prefer[i]); 
		}
	}
	return memo[capa];
}

int main(){
	cin>>n>>budget;
	for(int i=0; i<n; i++){
		cin>>cost[i]>>prefer[i];
	}
	cout<<Func(0)<<endl;
	return 0;
}
