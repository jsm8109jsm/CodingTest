#include <iostream>
#include <string>
using namespace std;
int n;
bool isFirst;
int main() {
	cin>>n;
	for(int i=0; i<n; i++){
		string a, b;
		cin>>a;
		for(int j=a.length()-1; j>=0; j--){
			if(isFirst && a[j] == '0'){
				continue;
			}
			else{
				isFirst = true;
				b += a[j];
			}
		}
		cout<<stoi(b)<<endl;
	}
	return 0;
}
