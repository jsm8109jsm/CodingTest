#include <iostream>
using namespace std;

int main(){
	int i, arr[27]={0}, max=0, count=0;
	char alpha;
	string a;
	cin>>a;
	for(i=0; i<a.length(); i++){
		a[i] = toupper(a[i]);
		arr[a[i]-65]++;
	}
	for(i=0; i<27; i++){
		if(max<arr[i]){
			max = arr[i];
			alpha=i+65;
			count=0;
			count++;
		}
		else if(max==arr[i]){
			count++;
		}
	}
	if(count>1){
		cout<<"?"<<endl;
	}
	else{
		cout<<alpha<<endl;
	}
}
