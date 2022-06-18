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
		vector<int> remainCopy = remain; //�߿� 
		perm.push_back(remain[i]); //�߿�
		remainCopy.erase(remainCopy.begin()+i); //�߿�
		per(perm, remainCopy); //�߿�
		perm.pop_back(); //�߿�
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
