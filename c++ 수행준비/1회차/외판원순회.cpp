//¾î·Á¿ò.. 

#include <iostream>
#include <vector>

using namespace std;

int city;
int cost[10][10];
bool visited[10];

int Shortest(vector<int> vec, int curCost){
	bool finished = true;
	for(int i=0; i<city; i++){
		if(!visited[i]) finished = false;
	}
	
	if(finished){
		return curCost + cost[vec.back()][vec[0]];
	}
	
	int minCost = 1000000;
	
	for(int i=0; i<city; i++){
		if(visited[i]) continue;
		int preCity = vec.back();
		if(cost[preCity][i] == 0) continue;
		vec.push_back(i);
		visited[i] = true;
		int updateCost = Shortest(vec, curCost+cost[preCity][i]);
		vec.pop_back();
		visited[i] = false;
		minCost = min(minCost, updateCost);
	}
	return minCost;
}

int main(){
	cin >> city;
	for(int i=0; i<city; i++){
		for(int j=0; j<city; j++){
			cin >> cost[i][j];
		}
	}
	vector<int> path;
	path.push_back(0);
	visited[0] = true;
	int minCost = Shortest(path, 0);
	cout<<minCost<<endl;
	return 0;
}
