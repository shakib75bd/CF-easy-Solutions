//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 200B - Drinks
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
    dl t;
    cin >> t;
    dl sum = 0;
    int n=t;
    while(n--)
    {
        dl a;
        cin >> a;
        sum = sum + a;
    }
    cout << fixed << setprecision(12) << sum/t <<endl;

return 0;      
}
