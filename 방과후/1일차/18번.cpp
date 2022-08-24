#include <iostream>
using namespace std;
int main() {
	int n, m, count=0, maxCount=-1;
	cin>>n>>m;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		if(a>m){
			count++;
			if(maxCount < count){
				maxCount = count;
			}
		}
		else{
			count=0;
		}
	}
	cout<<maxCount;
	return 0;
}
