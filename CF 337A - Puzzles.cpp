//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 337A - Puzzles
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
    int ara[b];
    for(int i=0;i<b;i++)
    {
        cin >> ara[i];
    }
    sort(ara,ara+b);
    int mn = INT_MAX;
    for(int i=0;i<=b-a;i++) mn = min(mn,ara[i+a-1]-ara[i]);
    cout<<mn;

return 0;
}
