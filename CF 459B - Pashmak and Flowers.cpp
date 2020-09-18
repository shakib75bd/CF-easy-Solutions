//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 459B - Pashmak and Flowers
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
    ll ara[n];
    ll maxn = 0,minn;
    for(int i=0; i<n; i++)
    {
        cin >> ara[i];
        maxn = max(maxn,ara[i]);
        minn = min(minn,ara[i]);
    }
    cout<<maxn - minn<<" ";
 
    ll count_max = 0;
    ll count_min = 0;
    ll all_count = 0;
 
    for(int i=0; i<n; i++)
    {
        if(ara[i]==ara[i+1]) all_count++;
    }
 
    if(all_count==(n-1))
    {
        cout<< n*(n-1)/2<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(ara[i]==minn) count_min++;
            else if(ara[i]==maxn) count_max++;
        }
        cout<< count_max*count_min <<endl;
    }
 
 
    return 0;
}
