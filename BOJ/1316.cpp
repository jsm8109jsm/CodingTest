#include <iostream>
using namespace std;

bool alpha[26];

int main(){
	string a;
	int i, n, j;
	cin>>n;
	int count=n;
	for(i=0; i<n; i++){
		cin>>a;
		for(j=0; j<a.length(); j++){
			if(alpha[a[j]-97] == true){
				count--;
				break;
			}
			if(a[j] != a[j+1]){
				alpha[a[j]-97] = true;
				continue;
			}
		}
		for(j=0; j<26; j++){
			alpha[j] = false;
		}
	}
	cout<<count<<endl;
}
