#include <iostream>
using namespace std;

int main(){
	int n,count=1,i=1,num=1;
	cin>>n;
	while(num<n){
		num+=(6*i);
		i++;
		count++;
	}
	cout<<count<<endl;
}
