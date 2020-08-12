//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 224A - Parallelepiped
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int a1 = sqrt((a*b)/c);
    int b1 = sqrt((b*c)/a);
    int c1 = sqrt((c*a)/b);

    cout<< 4*(a1+b1+c1) <<endl;

return 0;
}
