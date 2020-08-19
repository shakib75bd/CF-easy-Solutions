//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 268A - Games
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

    int ara1[n],ara2[n];

    for(int i=0;i<n;i++)
    {
        cin >> ara1[i];
        cin >> ara2[i];
    }

    int count = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(ara1[i]==ara2[j]) count++;
        }
    }

    cout<<count;

return 0;
}
