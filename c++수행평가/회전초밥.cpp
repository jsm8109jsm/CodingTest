#include <iostream>
using namespace std;
#define MAX_BUDGET 1000000
int n;
int m;
int price[20];
int preference[20];

int sw[201];
int FindMaxPref_sliding_window(){
	m = m/100;
	sw[0] = 0;
	for(int budget = 1; budget <= m; budget++){
		sw[budget%201] = 0; //중요
		for(int i = 0; i < n; i++){
			int targetPrice = price[i]/100;
			int targetPrefer = preference[i]; 
			if(budget < targetPrice) continue; //중요
			sw[budget%201] = max(sw[budget%201], sw[(budget-targetPrice)%201] + targetPrefer); //중요 + 점화식 
		}
	}
	return sw[m%201]; //중요
}

int main(){
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>price[i]>>preference[i];
	}
	cout<<FindMaxPref_sliding_window()<<endl;
	return 0;
} 
