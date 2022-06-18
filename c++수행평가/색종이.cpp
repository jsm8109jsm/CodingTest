#include <iostream>
using namespace std;

int blueCount, whiteCount, n, paper[128][128];

void CountColorPaper(int x, int y, int size){
	int color = paper[x][y], i, j;
	for(i=x; i<x+size; i++){
		for(j=y; j<j+size; j++){
			if(paper[i][j] != color){ //중요
				break;
			}
		}
		if(j<y+size) break; //중요
	}
	
	if(i==x+size){ //중요
		color == 1?blueCount++:whiteCount++;
		return;
	}
	
	CountColorPaper(x, y, size/2);
	CountColorPaper(x, y+size/2, size/2);
	CountColorPaper(x+size/2, y, size/2);
	CountColorPaper(x+size/2, y+size/2, size/2);
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>paper[i][j];
		}
	}
	
	CountColorPaper(0, 0, n);
	cout<<whiteCount<<endl;
	cout<<blueCount<<endl;
	
	return 0;
}
