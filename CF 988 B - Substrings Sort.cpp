//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 988 B - Substrings Sort
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
 
#include<bits/stdc++.h>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define tc ll t;cin>>t;while(t--)
 
bool comp (st a, st b) {
 
    return ( a.size()<b.size() );
}
 
 
int main()
{
   int n;
   cin >> n;
   st ara[n+1];
 
   for(int i=0; i<n; i++)
   {
       cin >> ara[i];
   }
 
   sort(ara, ara+n, comp);
 
   int count=0;
 
    for(int i=1; i<n; i++)
    {
        count = ara[i].find(ara[i-1]);
        if (count == -1)
        {
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES"<< endl;
    for (int i=0; i<n; i++) cout<<ara[i]<<endl;
 
   return 0;
}
