//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 734A - Anton and Danik
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
     int n, counta = 0, countd = 0;
     cin >> n;
     st s;
     cin >> s;
     for(int i=0;i<n;i++)
     {
         if(s[i]=='A') counta++;
         else if(s[i]=='D') countd++;
     }
     if(countd>counta) cout<<"Danik\n";
     else if(counta>countd) cout<<"Anton\n";
     else if(counta==countd) cout<<"Friendship\n";  

return 0;
}
