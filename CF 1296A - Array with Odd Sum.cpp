//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1296A - Array with Odd Sum
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
        ll n; cin >> n;

        ll ara[n];
        flf cin >> ara[i];

        ll sum=0;
        flf sum= sum+ ara[i];

        if(sum%2==1) cout<<"YES\n";
        else{
            ll count1=0,count2=0;
            flf{
                    if(ara[i]%2==0) count1++;
                    else count2++;
            }
            if(count2==0  ||  count1==0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }

    return 0;
}
