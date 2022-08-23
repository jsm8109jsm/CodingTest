#include <iostream>
using namespace std;

int main(){
	string a;
	cin>>a;
	int count=a.length(), i;
	for(i=0; i<a.length(); i++){
		if(a[i]=='c' && a[i+1]=='='){
			count--;
		}
		else if(a[i]=='c' && a[i+1]=='-'){
			count--;
		}
		else if(a[i]=='d' && a[i+1]=='z' && a[i+2]=='='){
			count--;
		}
		else if(a[i]=='d' && a[i+1]=='-'){
			count--;
		}
		else if(a[i]=='l' && a[i+1]=='j'){
			count--;
		}
		else if(a[i]=='n' && a[i+1]=='j'){
			count--;
		}
		else if(a[i]=='s' && a[i+1]=='='){
			count--;
		}
		else if(a[i]=='z' && a[i+1]=='='){
			count--;
		}
	}
	cout<<count<<endl;
}
