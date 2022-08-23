#include <iostream>
using namespace std;

int main(){
	int n,sum=0,i,a,b,j=0;
	cin>>n;
	while(n--){
		sum+=i;
		i++;
		if(i%2==0){
			j++;
			a = sum - j;
			b = sum - a+1;
			j=0;
		}
		else{
			j++;
			b = sum - j;
			a = sum - b+1;
			j=0;
		}
	}
	cout<<i<<endl;
	cout<<a<<"/"<<b<<endl;
}
