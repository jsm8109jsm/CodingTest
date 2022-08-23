#include <iostream>

using namespace std;

int blueCount, whiteCount, n, paper[128][128];

void Func(int x, int y, int size){
	int color = paper[x][y], i, j;
	for(i=x; i<x+size; i++){
		for(j=y; j<y+size; j++){
			if(paper[i][j] != color){
				break;
			}
		}
		if(j<y+size) break;
	}
	
	if(i==x+size){
		color==0?whiteCount++:blueCount++;
		return;
	}
		
	Func(x, y, size/2);
	Func(x+size/2, y, size/2);
	Func(x, y+size/2, size/2);
	Func(x+size/2, y+size/2, size/2);
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>paper[i][j];
	Func(0, 0, n);
	cout<<whiteCount<<endl<<blueCount<<endl;
	return 0;
} 
