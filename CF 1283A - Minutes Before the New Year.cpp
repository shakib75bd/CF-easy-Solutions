//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1283A - Minutes Before the New Year
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
 
#include<bits/stdc++.h>
#include <numeric>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define flf for(ll i=0; i<n; i++)
#define tc ll t;cin>>t;while(t--)
 
 
int main()
{
    tc{
        int hr, mn;
        cin >> hr>>mn;
 
        cout<< (((24-hr) - 1) * 60 ) + (60-mn)<<endl;
    }
 
    return 0;
}
