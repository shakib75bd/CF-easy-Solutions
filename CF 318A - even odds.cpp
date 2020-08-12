//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 318A - even odds
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
     ll n,k,oddc,evenc,ans;
     cin >> n >> k;
     
     if(n%2==0) oddc = n/2;
     else if(n%2!=0) oddc = (n/2) + 1;
     evenc = n/2;
     if(k<=oddc) ans = (k*2) - 1;
     else ans = (k - (n+1)/2)*2;
     
     cout<<ans<<endl;

return 0; 
}
