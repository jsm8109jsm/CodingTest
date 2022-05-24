#include <iostream>
using namespace std;

int board[100][100];
int n;
int flag;
bool jump(int x, int y){
	int jumpsize = board[x][y];
	if(jumpsize == 0){
		flag = true;
		return true;
	}
	else{
		if(jumpsize <= n-y){
			jump(x,y+jumpsize);
		}
		if(jumpsize <= n-x){
			jump(x+jumpsize,y);
		}
	}
	if(flag == true){
		return true;
	}
	return false;
}

int main() {
	int i,j;
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			cin>>board[i][j];
		}
	}
	jump(1,1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
}

