#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
 
int main(){
    optimize();
    int tt;
    cin>>tt;

    while(tt--){
        ll n;
        cin>>n;
        vector<ll> a(n);

        for(int i=0;i<n;i++) cin>>a[i];

        sort(a.begin(),a.end());
        ll mn=a[0];
        ll mx=a[n-1];

        ll cntmn=0,cntmx=0;
        for(int i=0;i<n;i++){
            if(mn==a[i]) cntmn++;
            if(mx==a[i]) cntmx++;
        }



    if(mx==mn) cout<<n*(n-1)<<endl;
    else cout<<2*cntmn*cntmx<<endl;
    
    }


    return 0;
}