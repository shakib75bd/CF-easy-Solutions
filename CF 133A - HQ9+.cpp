//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 133A - HQ9+
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
     st s;
     cin >>s;
     int count = 0;
     for(int i=0;i<s.size(); i++)
     {
         if(s[i]=='H' || s[i]=='Q' || s[i]=='9') count++;
     }  
     if(count>0) cout<<"YES\n";
     else cout<<"NO\n";
return 0;
}
