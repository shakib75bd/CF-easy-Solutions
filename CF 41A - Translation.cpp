//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 41A - Translation
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
      st s1,s2;
      int count = 0;
      cin >> s1 >> s2;
      char ara[s1.size()+1];
      char ara2[s2.size()+1];

      strcpy(ara,s1.c_str()); 
      strcpy(ara2,s2.c_str());

      reverse(ara,ara+s1.size());

      for(int i=0;i<s1.size();i++)
      {
         if(ara[i] == ara2[i]) count++;
      }
      if(count == s1.size()) cout << "YES\n";
      else cout<< "NO\n";

return 0;
}
