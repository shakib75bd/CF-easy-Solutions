//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 34B - Sale
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n ,m,a,sum =0 ,p=0,count = 0;
     cin >> n >> m;
     int ara[n];
     for(int i=0;i<n;i++)
     {
         cin >> a;
         if(a<0) 
         {
             ara[p] = a;
             p++;
         }
     }
     sort(ara, ara+p);
     if(m>p)
     {
         for(int i=0;i<p;i++)
        {
            sum = sum + ara[i];
        }
     }
     else 
     for(int i=0;i<m;i++)
     {
        sum = sum + ara[i];
     }
     cout<<abs(sum)<<endl;;

return 0; 
}
