#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int dp[n];
memset(dp,-1,sizeof(dp));
dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=min(i+k,n-1);j++){
            if(dp[j]==-1) dp[j]=dp[i]+abs(arr[i]-arr[j]);
           else dp[j]=min(dp[j],dp[i]+abs(arr[i]-arr[j]));
        }
    }
cout<<dp[n-1]<<endl;
return 0;                                                       
}