//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 228A - Is your horseshoe on the other hoof?
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int ara[4],count = 0;
     for(int i=0;i<4;i++)
     {
         cin >> ara[i];
     } 
     sort(ara,ara+4);
     for(int i=0;i<4;i++)
     {
         if(ara[i]==ara[i+1]) count++;
     }
     cout<<count<<endl; 
}
