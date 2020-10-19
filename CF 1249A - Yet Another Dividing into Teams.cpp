//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1249A - Yet Another Dividing into Teams
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
    tc {
        int n,count=1;
        cin >> n;

        int ara[n];
        flf cin >> ara[i];

        sort(ara, ara+n);

        flf {
            if( abs(ara[i]-ara[i+1])==1 )count=2;
        }
        cout<<count<<endl;
    }
}
