//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 110A - Nearly Lucky Numbers
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
     ll count=0;
     st s;
     cin >>s;
     if(s.size()==1) cout <<"NO\n";
     else
    {
     for(int i=0; i<s.size();i++)
     {
         if(s[i] == '4' || s[i] == '7') count++;
     }
 
     if(count == 7 || count == 4) cout << "YES\n";
     else cout<< "NO\n";
    }
 
return 0;
}
