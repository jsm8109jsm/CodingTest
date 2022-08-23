#include <iostream>
using namespace std;

int n, budget, memo[1000001], prefer[21], cost[21];

int Func(int capacity){
	if(memo[capacity]) return memo[capacity];
	int maxi=0;
	for(int i=0; i<n; i++){
		if(capacity+cost[i] <= budget){
			maxi = max(maxi, Func(capacity+cost[i])+prefer[i]);
		}
	}
	memo[capacity] = maxi;
	return memo[capacity];
}

int main(){
	cin>>n>>budget;
	for(int i=0; i<n; i++){
		cin>>cost[i]>>prefer[i];
	}
	cout<<Func(0);
	return 0;
}
