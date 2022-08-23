#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b;
	getline(cin, a);
	for(int i=0; i<a.length(); i++){
		if(a[i] != ' '){
			b += a[i];
		}
	}
	for(int i=0; i<b.length(); i++){
		if(b[i] >= 65 && b[i] <= 90){
			b[i] += 32;
		}
	}
	cout<<b;
	return 0;
}
