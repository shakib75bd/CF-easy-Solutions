//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 1131 A - Add Odd or Subtract Even
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
    int a,b;
    
    tc
    {
        cin >> a >> b;
        if(a==b) cout<<"0\n";
        else if(a>b && (abs(a-b) % 2)==0) cout<<"1\n";
        else if(a<b && (abs(a-b) % 2)!=0) cout<<"1\n";
        else cout<<"2\n";
    }
    
return 0;
}
