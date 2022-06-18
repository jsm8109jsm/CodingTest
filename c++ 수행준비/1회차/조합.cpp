#include <iostream>
#include <vector>

using namespace std;

void Combi(vector<int> comb, int max, int count){
	int smallist;
	if(comb.size() == count){
		for(int i=0; i<count; i++){
			cout << comb[i] << " ";
		}
		cout << endl;
		return;
	}
	
	if(comb.empty()){
		smallist = 1; //중요
	}
	else{
		smallist = comb.back() + 1; //중요
	}
	
	for(int i=smallist; i<=max; i++){ //중요
		comb.push_back(i);
		Combi(comb, max, count);
		comb.pop_back();
	}
}

int main(){
	int n, r;
	cin >> n >> r;
	vector<int> comb;
	Combi(comb, n, r);
	return 0;
} 
