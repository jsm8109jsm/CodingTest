#include <iostream>
using namespace std;

int N;
int paper[128][128];
int whitecount, bluecount;

void CountColorPaper(int x, int y, int size){
	int color = paper[x][y], i, j;
	for(i=x; i<x+size; i++){
		for(j=y; j<y+size; j++){
			if(paper[i][j] != color){
				break;
			}
		}
		if(j<y+size) break;
	}
	if(i==x+size)
	{
		color==1?bluecount++:whitecount++;
		return;
	}
	CountColorPaper(x, y, size/2);
	CountColorPaper(x, y+size/2, size/2);
	CountColorPaper(x+size/2, y, size/2);
	CountColorPaper(x+size/2, y+size/2, size/2);
}

int main(void){
	int i,j;
	cin>>N;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			cin>>paper[i][j];
		}
	}
	CountColorPaper(0, 0, N);
	cout<<whitecount<<endl;
	cout<<bluecount<<endl;
}
