//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 122A - Lucky Division
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    int ara[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    int count=0;
    int n;
    cin >> n;
    for(int i=0;i<12;i++)
    {
        if(n==ara[i])
        {
            cout<<"YES\n";
            break;
        }
        else if(n%ara[i]==0)
        {
            cout<<"YES\n";
            break;
        }
        else count++;
    }
    if(count==12) cout<<"NO\n";

return 0;
}
