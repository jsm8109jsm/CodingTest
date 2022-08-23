#include <iostream>
#include <string>
using namespace std;
int main() {
	string code;
	cin>>code;
	int year = ((code[0]-'0')*10)+(code[1]-'0');
	code[7] == '1' || code[7] == '2' ? cout<<20+(100-year)<<" " : cout<<20-year<<" ";
	code[7] == '2' || code[7] == '4' ? cout<<"W" : cout<<"M";
	return 0;
}
