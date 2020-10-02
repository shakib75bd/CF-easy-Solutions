//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1095B - Array Stabilization
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
    cin >>n;
    ll ara[n];
    for(int i=0;i<n;i++)
    {
        cin >> ara[i];
    }

    sort(ara,ara+n);

    ll hoga1,hoga2;
    hoga1=abs(ara[n-2] - ara[0]);
    hoga2=abs(ara[n-1] - ara[1]);

    cout<<min(hoga2,hoga1)<<endl;

    return 0;

}
