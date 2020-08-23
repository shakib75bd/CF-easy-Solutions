//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 148A - Insomnia Cure
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
    int k,l,m,n,D;
    cin >> k >> l >> m >> n;
    cin >> D;
    int count=0;
    for(int i=1;i<=D;i++)
    {
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0) count++;
    }
    cout<<D-count;

return 0;
}
