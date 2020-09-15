//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 205A - Little Elephant and Rozdil
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
#include<bits/stdc++.h>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define tc ll t;cin>>t;while(t--)
 
int main()
{
    ll n;
    cin >> n;

    ll ans,minm;
    ll ara[n];
    
    for(int i=0;i<n;i++)  
    {
        cin >> ara[i];
        minm=min(ara[i],minm);
    }

    ll count=0;

    for(int i=0;i<n;i++)
    {
        if(ara[i]==minm) 
        {
            ans=i+1;
            count++;
        }
    }

    if(count==1) cout<<ans<<endl;
    else cout<<"Still Rozdil"<<endl;

return 0;
}
