#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int arr[50], j=0, countArr[50], k=0, l=0, num=0;
	bool isNotFirst = false;
	cin>>str;
	for(int i=0; i<str.length(); i++){
		if(str[i] >= '0' && str[i] <= '9'){
			arr[j] = str[i]-'0';
			j++;
		}
	}
	for(int i=0; i<j; i++){
		if(arr[i] == 0){
			if(!isNotFirst) continue;
			else countArr[k] = arr[i];
			k++;
		}
		else{
			isNotFirst = true;
			countArr[k] = arr[i];
			k++;
		}
	}
	for(int i=k-1; i>=0; i--){
		int ten = 1;
		for(int a=1; a<k; a++){
			ten * 10;
		}
		num += countArr[l]*ten;
		l++;
		cout<<num<<endl;
	}
	// for(int i=k-1; i>=0; i--){
	// 	cout<<countArr[i]<<endl;
	// 	countArr[i] * 
	// }
	
	cout<<num;
	return 0;
}
