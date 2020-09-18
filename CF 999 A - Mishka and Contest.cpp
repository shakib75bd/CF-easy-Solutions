//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 999 A - Mishka and Contest
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


int main()
{
   
   int n,k;
   cin >> n >> k;
   int ara[n];
   for(int i=0; i<n; i++)
   {
       cin >> ara[i];
   }

   int count = 0;

   int b = (n-1);
   int mn;

   for(int i=0; i<n; i++)
   {
        if(ara[i] <= k) count++;
        else
        {
            mn=i;
            break;
        }
   }

   for(int i=b; i>=mn; i--)
   {
        if(ara[i] <= k) count++;
        else break;
   }

   cout<< count <<endl;

   return 0;
}
