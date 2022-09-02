#include <iostream>
#include <string>
using namespace std;
int n, num;
bool isFirst;
int main() {
	cin>>n;
	for(int i=0; i<n; i++){
		string a, b;
		bool isPrime = false;
		cin>>a;
		for(int j=a.length()-1; j>=0; j--){
			b += a[j];
		}
		num = stoi(b);
		for(int j=2; j<num; j++){
			if(num%j==0){
				isPrime = true;
				break;
			}
		}
		if(!isPrime) cout<<num<<" ";
	}
	return 0;
}
