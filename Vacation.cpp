#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++) cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    long long dp[n][3];
    memset(dp,0,sizeof(dp));
    dp[0][0]=arr[0][0],dp[0][1]=arr[0][1],dp[0][2]=arr[0][2];
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(j!=k){
                    dp[i][k]=max(dp[i][k],dp[i-1][j]+arr[i][k]);
                }
            }
        }
    }
    long long ans=0;
    ans=max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2]));
    cout<<ans<<endl;
    return 0;
}