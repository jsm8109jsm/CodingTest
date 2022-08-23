#include <iostream>

using namespace std; 

bool relation[10][10], taken[10];
int n, m;

int Func(){
	bool check = true;
	int first = -1;
	
	//중요 
	for(int i=0; i<n; i++){
		if(!taken[i]){
			check = false;
			first = i;
			break;
		}
	}
	
	if(check) return 1;
	
	int count = 0;
	
	for(int i=count+1; i<n; i++){
		if(!taken[i] && relation[first][i]){
			taken[i] = true;
			taken[first] = true;
			count += Func(); //틀림 
			taken[i] = false;
			taken[first] = false;
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
