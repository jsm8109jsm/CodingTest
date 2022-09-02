#include <iostream>
using namespace std;
int main() {
	string ch;
	cin>>ch;
	int a=0,b=0;
	if(ch == "CH"){
		a=1;
		b=1;
	}
	else if(ch.length() == 4){
		a = ch[1] - 48;
		b = ch[3] - 48;
	}
	else{
		for(int i=0; i<ch.length(); i++){
			if(ch[1] >= 48 && ch[1] <= 57){
				a = ch[1] - 48;
				b = 1;
			}
			else{
				a = 1;
				b = ch[2] - 48;
			}
		}
	}
	cout<<a*12+b*1;
	return 0;
}
