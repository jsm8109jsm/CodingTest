#include <iostream>
using namespace std;
int main() {
	int min = 101, max = 1, n, age;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>age;
		if(age>max) max=age;
		if(age<min) min=age;
	}
	cout<<max-min;
	return 0;
}
