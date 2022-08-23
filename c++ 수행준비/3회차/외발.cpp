#include <iostream>

using namespace std;

int n, board[100][100], memo[100][100];

bool Func(int x, int y){
	if(memo[x][y]) return memo[x][y];
	int jumpSize = board[x][y];
	if(jumpSize == 0) return true;
	if(x>=n || n<=y) return false;
	memo[x][y] = Func(x+jumpSize,y) || Func(x,y+jumpSize);
	return memo[x][y];
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>board[i][j];
	
	Func(0, 0)?cout<<"YES":cout<<"NO";
	return 0;
}
