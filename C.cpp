//
// Created by Nihith on 22-02-2020.
//
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,mean=0;
    ll max_stamina=(1e18);
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mean+=arr[i];
    }
    mean/=n;
    //cout<<max_stamina<<endl;
    for(int k:{0,1}){
        ll cur_stamina=0LL;
        for(int i=0;i<n;i++){
            cur_stamina+=(mean+k-arr[i])*(mean+k-arr[i]);
        }
        max_stamina=min(max_stamina,cur_stamina);
    }
    cout<<max_stamina<<endl;
    return 0;
}

