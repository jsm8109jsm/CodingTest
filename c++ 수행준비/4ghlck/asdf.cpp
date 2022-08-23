#include <iostream>

using namespace std;

int memo[100];
int Fibo(int n){
	if(memo[n]) return memo[n];
	int numList[100];
	numList[1] = 1;
	numList[2] = 1;
	for(int i=3; i<=n; i++){
		numList[i] = numList[i-1] + numList[i-2];
	}
	memo[n] = numList[n];
	return memo[n];
}

int main(void)
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout << i << "¹øÂ° Ç× : " << Fibo(i) << endl;
    }
    return 0;
}
