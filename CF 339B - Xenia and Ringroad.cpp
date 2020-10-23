//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 339B - Xenia and Ringroad
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
    ll m,n;
    cin >> m >> n;

    ll ac[n];
    flf cin >> ac[i];
    ll count=ac[0]-1,k=ac[0],cc=0;

    for(int i=1; i<n; i++)
    {
        if(ac[i]<k) cc= (m-k)+ ac[i];
        else cc= ac[i]-k;
        count= count+cc;
        k=ac[i];
    }

    cout<<count<<endl;

    return 0;
}
