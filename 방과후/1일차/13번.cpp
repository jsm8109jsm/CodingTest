#include <iostream>
using namespace std;
int number[10],maxNum,lastMax;
int main() {
	string a;
	cin>>a;
	for(int i=0; i<a.length(); i++){
		number[a[i]-48]++;
	}
	for(int i=0; i<10; i++){
		maxNum = max(maxNum, number[i]);
	}
	for(int i=0; i<10; i++){
		if(number[i] == maxNum){
			if(lastMax < i){
				lastMax = i;
			}
		}
	}
	cout<<lastMax;
	return 0;
}
