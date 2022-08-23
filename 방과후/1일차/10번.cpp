#include <iostream>
using namespace std;
int count[100];
int n, maxNum, num[100],j,lastMaxArr[100];
int main() {
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>num[i];
		int memo=num[i];
		while(num[i]>0){
			count[i] += num[i]%10;
			num[i]/=10;
		}
		if(maxNum < count[i]){
			maxNum = count[i];
		}
		num[i] = memo;
	}
	for(int i=0; i<n; i++){
		if(count[i] == maxNum){
			lastMaxArr[j++] = num[i];
		}
	}
	int lastMax = lastMaxArr[0];
	for(int i=0; i<j; i++){
		if(lastMax < lastMaxArr[i]){
			lastMax = lastMaxArr[i];
		}
	}
	cout<<lastMax;
}
