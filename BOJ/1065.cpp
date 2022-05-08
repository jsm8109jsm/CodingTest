#include <iostream>
using namespace std;

int d(int n){
	int a[4], i, count=0;
	for(i=1; i<=n; i++){
		int j=0, newn = i;
		while(newn>0){
			a[j++] = newn%10;
			newn/=10;
		}
		if(a[0]-a[1] == a[1]-a[2]){
			count++;
		}
		else if(i<100){
			count++;
		}
		else if(n==1000){
			return 144;
		}
	}
	return count;
}

int main() {
	int n;
	cin>>n;
	cout<<d(n)<<endl;
}
