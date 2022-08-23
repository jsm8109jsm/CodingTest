#include <iostream>

using namespace std;

int n,m;
bool relation[10][10], taken[10]; 

int Func(){
	int start = -1;
	bool flag = true;
	
	for(int i=0; i<n; i++){
		if(!taken[i]){
			flag = false;
			start = i;
			break;
		}
	}
	
	if(flag) return 1;
	
	int count=0;
	
	for(int i=0; i<n; i++){
		if(!taken[i] && relation[start][i]){
			taken[start] = true;
			taken[i] = true;
			count += Func();
			taken[start] = false;
			taken[i] = false;
		}
	}
	return count;
}

int main(){
	cin>>n>>m;
	for(int i=0; i<m; i++){
		int s1, s2;
		cin>>s1>>s2;
		relation[s1][s2] = true;
		relation[s2][s1] = true;
	}
	cout<<Func()<<endl;
}
