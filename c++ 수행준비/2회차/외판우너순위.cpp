#include <iostream>
#include <vector>

using namespace std;

int city;
int cost[10][10];
bool visit[10];

int Func(vector<int> path, int curCost){
	bool finish = true;
	for(int i=0; i<city; i++){
		if(!visit[i]) finish = false;
	}
	if(finish){
		return curCost + cost[path.back()][path[0]];
	}
	
	int minCost = 1000000;
	
	for(int i=0; i<city; i++){
		if(visit[i]) continue;
		int preCity = path.back();
		if(!cost[preCity][i]) continue;
		path.push_back(i);
		visit[i] = true;
		int updateCost = Func(path, curCost+cost[preCity][i]);
		path.pop_back();
		visit[i] = false;
		minCost = min(minCost, updateCost);
	}
	return minCost;
}

int main(){
	cin >> city;
	for(int i=0; i<city; i++)
		for(int j=0; j<city; j++)
			cin>>cost[i][j];
	vector<int> path;
	path.push_back(0);
	int minCost = Func(path, 0);
	cout<<minCost<<endl;
}
