#include <iostream>
using namespace std;

int count;
bool flag;

void PrintCount(int count){
	int i;
	for(i=0; i<count; i++){
		cout<<"_";
	}
}

void f(int n){
	int i;
	PrintCount(count);
	cout<<"\"����Լ��� ������?\""<<endl;
	if(n==0){
		flag == true;
		PrintCount(count);
		cout<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\""<<endl;
		return;
	}
	PrintCount(count);
	cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���."<<endl;
	PrintCount(count);
	cout<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���."<<endl;
	PrintCount(count);
	cout<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\""<<endl;
	count+=4;
	f(n-1);
	PrintCount(count);
	cout<<"��� �亯�Ͽ���."<<endl;
	count-=4;
	return;
}

int main(){
	int n;
	cin>>n;
	cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<endl;
	f(n);
	cout<<"��� �亯�Ͽ���."<<endl;
	return 0;
}
