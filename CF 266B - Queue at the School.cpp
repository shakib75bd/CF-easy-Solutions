//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 266B - Queue at the School
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
     int n,t;
     cin >> n >>t;
     st s;
     cin>>s;
     for(int j=0;j<t;j++)
     {
        for(int i=1;i<(n);i++)  
        {
            if(s[i]=='G' && s[i-1]=='B')
            {
                s[i]='B'; 
                s[i-1]='G';
                i++;
            }
        }
     }
     cout <<s<<endl;
 
return 0;
}
