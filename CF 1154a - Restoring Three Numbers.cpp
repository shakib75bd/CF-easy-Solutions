//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1154a - Restoring Three Numbers
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
 
#include<bits/stdc++.h>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define flf for(ll i=0; i<n; i++)
#define tc ll t;cin>>t;while(t--)
 
 
int main() {
    int n=4;
    ll ara[n];
 
    flf cin >> ara[i];
 
    sort(ara, ara+n);
 
    cout<< ara[3]-ara[0]<<" "<<ara[3]-ara[1]<<" "<<ara[3]-ara[2]<<endl;
 
    return 0;
}
