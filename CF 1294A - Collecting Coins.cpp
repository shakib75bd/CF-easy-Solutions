//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1294A - Collecting Coins
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define flf for(int i=0; i<n; i++)
#define tc ll t;cin>>t;while(t--)


int main()
{
    tc{
        int n=3;
        ll ara[n];
        flf cin>> ara[i];
        sort(ara,ara+n);

        ll ghb;
        ghb = (2*ara[2])-ara[1]-ara[0];

        ll nt;
        cin >> nt;

        if(ghb>nt) cout<<"NO\n";
        else{
            if((nt - ghb)%3==0) cout<<"YES\n";
            else cout<<"NO\n";
        }

    }

    return 0;
}
