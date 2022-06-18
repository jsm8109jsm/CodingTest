#include <iostream>
using namespace std;

int n;
int board[100][100];
int memo[100][100];

bool jump(int x, int y)
{
//	if(x>=n || y>=n) return false;
//	int jumpSize = board[x][y];
//	if(jumpSize == 0) return true;
//	if(memo[x][y]!=-1) return memo[x][y];
//	memo[x][y] =jump(x, y+jumpSize) || jump(x+jumpSize, y);
//	return memo[x][y];



















	if(x>=n || y>=n) return false;
	int jumpSize = board[x][y];
	if(jumpSize == 0) return true;
	if(memo[x][y] != -1) return memo[x][y];
	memo[x][y] = jump(x, y+jumpSize) || jump(x+jumpSize, y);
	return memo[x][y];
}

int main(void)
{
	for(int i=0; i<100; i++){
		for(int j=0; j<100; j++){
			memo[i][j] = -1;
		}
	} 
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			cin >> board[i][j];
	jump(0,0)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	return 0;
}
