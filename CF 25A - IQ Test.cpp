//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 25A - IQ Test
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
   int n;
   cin >> n;
   int mn [n];
   int ev = 0,od = 0;
   for(int i=0;i<n;i++)
   {
       cin >> mn[i];
       if(mn[i]%2==0) ev++;
       else od++;
   }
   int ans;
   if(ev==1)
   {
      for(int i=0;i<n;i++)
    {
       if(mn[i]%2==0){
           ans = i+1;
           break;
       }
    }
   }
   else
   {
       for(int i=0;i<n;i++)
       {
           if(mn[i]%2>0) 
           {
               ans=i+1;
               break;
           }
       }
   }

   cout<<ans;
   
return 0;
}
