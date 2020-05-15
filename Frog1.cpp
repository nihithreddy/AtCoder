#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int dp[n];
memset(dp,INT_MAX,sizeof(dp));
dp[0]=0;
for(int i=1;i<n;i++){
if(i==1) dp[i]=abs(arr[i]-arr[i-1]);
else dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));
}
cout<<dp[n-1]<<"\n";
return 0;
}
