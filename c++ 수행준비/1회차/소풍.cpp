#include <iostream>
#include <vector>

using namespace std;

bool relation[10][10], taken[10];
int n,m;

int CountParsing(){
	bool check = true;
	int first = -1;
	for(int i=0; i<n; i++){
		if(!taken[i]){
			check = false;
			first = i;
			break;
		}
	}
	if(check) return 1;
	
	int count = 0;
	for(int i=first+1; i<n; i++){
		if(!taken[i] && relation[first][i]){
			taken[first] = true;
			taken[i] = true;
			count += CountParsing();
			taken[first] = false;
			taken[i] = false;
		}
	}
	return count;
}

int main(){
	cin >> n >> m;
	for(int i=0; i<m; i++){
		int s1, s2;
		cin >> s1 >> s2;
		relation[s1][s2] = true;
		relation[s2][s1] = true;
	}
	cout<<CountParsing()<<endl;
	return 0;
} 
