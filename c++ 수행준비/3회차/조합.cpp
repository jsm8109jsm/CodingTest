#include <iostream>
#include <vector>

using namespace std;

void Func(vector<int> comb, int max, int count){
	int smallist;
	if(comb.size() == count){
		for(int i=0; i<count; i++){
			cout<<comb[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	//Æ²¸² 
	if(comb.empty()){
		smallist = 1;
	}
	else{
		smallist = comb.back() + 1;
	} 
	
	for(int i=smallist; i<=max; i++){
		comb.push_back(i);
		Func(comb, max, count);
		comb.pop_back();
	}
}

int main(){
	int n,r;
	cin>>n>>r;
	vector<int> comb;
	Func(comb, n, r);
} 
