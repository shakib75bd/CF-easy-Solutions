//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1335A - Candies and Two Sisters
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
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin >> n;
        if(n<=2) 
        {
            cout<<"0"<<endl;
        }

        else if(n>2)
        {
            if(n%2==0) cout<<(n/2)-1<<endl;
            else cout<<n/2<<endl;
        }
    }

return 0;
}
