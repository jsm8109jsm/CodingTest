#include <iostream>
using namespace std;
int alphabet[52], alphabet2[52], count;
int main() {
	string a,b;
	cin>>a;
	for(int i=0; i<a.length(); i++){
		int index;
		if(a[i]>=65 && a[i]<=90){
			index = a[i]-65;
		}
		else{
			index = a[i]-71;
		}
		alphabet[index]++;
	}
	
	cin>>b;
	for(int i=0; i<b.length(); i++){
	int index;
	if(b[i]>=65 && b[i]<=90){
		index = b[i]-65;
	}
	else{
		index = b[i]-71;
	}
		alphabet2[index]++;
	}
	
	for(int i=0; i<52; i++){
		if(alphabet[i] != alphabet2[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
