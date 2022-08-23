#include <iostream>

using namespace std;

int sw[201];
int n,m,price[20],prefer[20];

int Func(){
	m = m/100;
	sw[0] = 0; //외우기;; 
	for(int budget=1; budget<=m; budget++){ //외우기;; 
		sw[budget%201] = 0; //외우기;; 
		for(int sushi=0; sushi<n; sushi++){
			int targetPrice = price[sushi]/100; //외우기;; 
			int targetPrefer = prefer[sushi];
			if(budget < targetPrice) continue; //외우기;; 
			sw[budget%201] = max(sw[budget%201], sw[(budget-targetPrice)%201]+targetPrefer); //외우기;; 
		}
	}
	return sw[m%201]; //외우기;; 
}

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>price[i]>>prefer[i];
	}
	cout<<Func()<<endl;
	return 0;
} 
