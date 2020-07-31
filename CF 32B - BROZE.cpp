//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 32B - BROZE
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
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='-' && s[i+1]=='.') 
          {
              cout<<"1";
              i++;
          }
          else if(s[i]=='-' && s[i+1]=='-')
          {
              cout<<"2";
              i++;
          }
          else if(s[i]=='.') cout<<0;
      } 
      cout<<endl;
}
