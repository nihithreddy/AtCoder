//
// Created by Nihith on 22-02-2020.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int N,K,ans=0;
    cin>>N>>K;
    while(N>0){
        N/=K;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}

