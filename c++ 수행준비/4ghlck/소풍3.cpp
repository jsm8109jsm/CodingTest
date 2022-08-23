#include <iostream>

using namespace std;

bool relate[10][10], taken[10];
int n,r;

int Func(){
	bool flag = true;
	int start = -1;
	
	for(int i=0; i<n; i++){
		if(!taken[i]){
			flag = false;
			start = i;
			break;
		}
	}
	
	if(flag) return 1;
	
	int count=0;
	for(int i=start+1; i<n; i++){
		if(!taken[i] && relate[start][i]){
			taken[i] = true;
			taken[start] = true;
			count+=Func();
			taken[i] = false;
			taken[start] = false;
		}
	}
	return count;
}

int main(){
	cin>>n>>r;
	for(int i=0; i<r; i++){
		int s1,s2;
		cin>>s1>>s2;
		relate[s1][s2] = true;
		relate[s2][s1] = true;
	}
	cout<<Func()<<endl;
	return 0;
}
