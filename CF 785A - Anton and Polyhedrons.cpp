//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 785A - Anton and Polyhedrons
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
    ll n,count = 0;
    cin >> n;
    st s;
    while(n--)
    {
        cin >> s;

        if(s=="Icosahedron") count = count + 20;
        else if(s=="Cube") count = count + 6;
        else if(s=="Tetrahedron") count = count + 4;
        else if(s=="Dodecahedron") count = count + 12;
        else if(s=="Octahedron") count = count + 8;
    }

    cout<< count;

return 0;
}
