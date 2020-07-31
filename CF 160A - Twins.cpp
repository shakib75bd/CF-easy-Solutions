//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 160A - Twins
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
     int ara[101],sum = 0,sum2 = 0, minus, count = 0;
     uns n;
     cin >> n;
     for(int i=0;i<n;i++)
     {
         cin >> ara[i];
     } 

     sort(ara, ara+n, greater<int>());

     for(int i=0;i<n;i++)
     {
        sum = sum + ara[i]; 
     }


     for(int i=0;i<n;i++)
     {
        minus = 0;
        sum2 = sum2 + ara[i];
        count++;
        minus = sum -sum2; 
        if(sum2 > minus) 
        {
            break;
        }
     }
     cout << count <<endl;

return 0;
}
