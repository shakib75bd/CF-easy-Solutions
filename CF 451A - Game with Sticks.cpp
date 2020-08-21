//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 451A - Game with Sticks
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
    int a,b;
    cin >> a >> b;
    if(a==1 || b==1) cout<<"Akshat\n";
    else
    {    
        int p;
        p = min(a,b);
        if(p%2==0) cout<<"Malvika\n";
        else cout<<"Akshat\n";
    }

return 0;
}
