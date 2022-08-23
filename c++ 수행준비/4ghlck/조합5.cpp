#include <iostream>
#include <vector>
using namespace std;

int n,r;

void Func(vector<int> vec, int max, int count){
	if(count==vec.size()){
		for(int i=0; i<count; i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	int smallist;
	
	if(vec.empty()) smallist = 1;
	
	else{
		smallist = vec.back() + 1;
	}
	
	for(int i=smallist; i<=max; i++){
		vec.push_back(i);
		Func(vec, max, count);
		vec.pop_back();
	}
}

int main(){
	cin>>n>>r;
	vector<int> vec;
	Func(vec, n, r);
	return 0;
} 
