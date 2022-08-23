#include <iostream>
using namespace std; 


int memo[500][500], board[500][500], n;

bool Func(int x, int y){
	if(x>=n || y>=n) return false;
	if(memo[x][y]) return memo[x][y];
	int jumpSize = board[x][y];
	if(jumpSize == 0) return true;
	memo[x][y] = Func(x, y+jumpSize) || Func(x+jumpSize, y);
	return memo[x][y];
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>board[i][j];
		}
	}
	Func(0, 0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
} 
