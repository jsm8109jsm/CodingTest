#include <iostream>

using namespace std;

int sw[201];
int n,m,price[20],prefer[20];

int Func(){
	m = m/100;
	sw[0] = 0; //�ܿ��;; 
	for(int budget=1; budget<=m; budget++){ //�ܿ��;; 
		sw[budget%201] = 0; //�ܿ��;; 
		for(int sushi=0; sushi<n; sushi++){
			int targetPrice = price[sushi]/100; //�ܿ��;; 
			int targetPrefer = prefer[sushi];
			if(budget < targetPrice) continue; //�ܿ��;; 
			sw[budget%201] = max(sw[budget%201], sw[(budget-targetPrice)%201]+targetPrefer); //�ܿ��;; 
		}
	}
	return sw[m%201]; //�ܿ��;; 
}

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>price[i]>>prefer[i];
	}
	cout<<Func()<<endl;
	return 0;
} 
