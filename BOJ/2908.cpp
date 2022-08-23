#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int i;
	string a,b;
	cin>>a>>b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	a>b?cout<<a<<endl:cout<<b<<endl;
}
