#include <iostream>
#include <string>
using namespace std;
int main() {
	string str, numStr="";
	int arr[50], j=0, k=0, count=0;
	char charArr[50];
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
			else charArr[k] = arr[i]+48;
			k++;
		}
		else{
			isNotFirst = true;
			charArr[k] = arr[i]+48;
			k++;
		}
	}
	for(int i=0; i<k; i++){
		numStr += charArr[i];
	}
	int num = stoi(numStr);
	cout<<num<<endl;
	for(int i=1; i<=num; i++){
		if(num%i==0) count++;
	}
	cout<<count;
	return 0;
}
