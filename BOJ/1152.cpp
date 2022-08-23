#include <iostream>
#include <string>
using namespace std;

int main(){
	int i, count=0;
	string s;
	getline(cin, s);
	for(i=0; i<s.length(); i++){
		if(s[i] == ' '){
			count++;
		}
	}
	if(s[0] != ' ' && s[i-1] != ' '){
		count++;
	}
	else if(s[0] == ' ' && s[i-1] == ' '){
		count--;
	}
	cout<<count<<endl;
}
