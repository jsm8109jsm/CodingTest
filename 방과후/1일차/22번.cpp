#include <iostream>
using namespace std;
int main() {
	int n, count=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		int num = i;
		while(num>0){
			if(num%10 == 3) count++;
			num/=10;
		}
	}
	cout<<count;
	return 0;
}
