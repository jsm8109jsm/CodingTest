#include <iostream>
using namespace std;

int n,m;
bool relate[10][10], taken[10];

int Func(){
	int first = -1;
	bool flag = true;
	
	for(int i=0; i<n; i++){
		if(!taken[i]){
			flag = false;
			first = i;
			break;
		}
	}
	
	if(flag) return 1;
	
	int count=0;
	for(int i=0; i<n; i++){
		if(!taken[i] && relate[first][i]){
			taken[first] = true;
			taken[i] = true;
			count+=Func();
			taken[first] = false;
			taken[i] = false;
		}
	}
	return count;
}

int main(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int s1,s2;
		cin>>s1>>s2;
		relate[s1][s2] = true;
		relate[s2][s1] = true;
	}
	cout<<Func();
	return 0;
}
