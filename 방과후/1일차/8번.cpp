#include <iostream>
using namespace std;
int main() {
	int open=0, close=0;
	string a;
	cin>>a;
	for(int i=0; i<a.length(); i++){
		if(a[i] == '('){
			open++;
		}
		else{
			close++;
		}
	}
	open==close ? cout<<"YES": cout<<"NO";
}
