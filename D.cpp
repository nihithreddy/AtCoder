
//
// Created by Nihith on 22-02-2020.
//
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m=1e9+7;
ll inv[200005];
ll fastexpo(ll n,int k){
    ll res=1LL;
    while(k>0){
        if(k&1) res=(res*n)%m;
        n=(n*n)%m;
        k>>=1;
    }
    return res;
}
ll nck(ll n, ll k){
 ll ans=1LL;
    for(int i=1;i<=k;i++){
        ans=ans*(n-i+1)%m*inv[i]%m;
    }
   return ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    inv[1] = 1;
    for(int i = 2; i <=2e5; ++i)
    inv[i] = (m - (m/i) * inv[m%i] % m) % m;
    ll cnt=fastexpo(2,n);
    cnt=(cnt+2*m-nck(n,a)-nck(n,b)+m-1)%m;
    cout<<(cnt)<<endl;
    return 0;
}

