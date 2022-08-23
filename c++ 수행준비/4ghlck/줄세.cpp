#include <iostream>
using namespace std;
int arr[501],dp[501],n,maxi;
int main() {
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        dp[i] = 1;
        for(int j=0;j<i;j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
        maxi = max(maxi,dp[i]);
    }
    cout<<n - maxi;
}


