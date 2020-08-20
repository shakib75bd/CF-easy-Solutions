//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1328A - Divisibility Problem
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;    

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define fxsp fixed<<setprecision    

int main()          
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b,count = 0;
        cin >> a >>b;
        if(a%b==0) cout<<"0\n";
        else
        {
            if(a<b) cout<<b-a<<endl;
            else if(a>b) cout<< b - (a%b)<<endl;
        }
    }

return 0;
}
