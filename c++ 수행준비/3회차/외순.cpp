#include <iostream>
#include <vector>

using namespace std;

int cityNum;
int city[10][10];
bool visit[10];

int Func(vector<int> path, int curCost){
	bool finish = true;
	for(int i=0; i<cityNum; i++){
		if(!visit[i]) finish = true;
	}
	if(finish){
		return curCost + city[path.back()][path[0]];
	}
	int minCost = 1000000;
	
	for(int i=0; i<cityNum; i++){
		if(visit[i]) continue;
		int preCity = path.back();
		if(!city[preCity][i]) continue;
		path.push_back(i);
		visit[i] = true;
		int updateCost = Func(path, curCost+city[preCity][i]);
		path.pop_back();
		visit[i] = false;
		minCost = min(minCost, updateCost);
	}
	return minCost;
}

int main(){
	cin>>cityNum;
	for(int i=0; i<cityNum; i++)
		for(int j=0; j<cityNum; j++)
			cin>>city[i][j];
	
	vector<int> path;
	path.push_back(0);
	visit[0] = true;
	cout<<Func(path, 0)<<endl;
	return 0;
} 
