//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 80A - Panoramix's Prediction
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
    int a,b,count = 0, p1;
    cin >> a >> b;
    int q = a+1;
    while(1)
    {
        for(int i=2;i<=q/2;i++)
    {
        if(q%i==0) count++;
    }
    if(count==0)
    {
        p1 = q;
        break;
    }
     q++;
     count=0;
    }
    if(p1==b) cout<<"YES\n";
    else cout<<"NO\n";

return 0;
}
