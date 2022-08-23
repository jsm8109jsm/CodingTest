#include <iostream>
#include <vector>

using namespace std;

void per(vector<int> perm, vector<int> remain){
	if(remain.size() == 0){
		for(int i=0; i<perm.size(); i++){
			cout<<perm[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=0; i<remain.size(); i++){
		vector<int> remainCopy = remain; //중요 
		perm.push_back(remain[i]); //중요
		remainCopy.erase(remainCopy.begin()+i); //중요
		per(perm, remainCopy); //중요
		perm.pop_back(); //중요
	}
	return;
}

int main(){
	int n;
	cin >> n;
	vector<int> remain;
	for(int i=0; i<n; i++){
		remain.push_back(i+1);
	}
	per(vector<int>(), remain);
	return 0;
}
