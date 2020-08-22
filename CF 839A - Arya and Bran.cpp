//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 839A - Arya and Bran
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;    

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define fxsp fixed<<setprecision    

int main()          
{
    int n,k;
    cin >> n >> k;

    int ara[n+10];

    for(int i=0;i<n;i++)
    {
        cin >> ara[i];
    }

    int mains=0,count=0, sum;

    for(int i=0;i<n;i++)
    {
        mains =  ara[i] + mains;
        sum = min(mains,8);
        mains-=sum;
        k-=sum;
        count++;
        if(k<=0) break;
    }

    if(k>0) cout<<"-1\n";
    else cout<<count;

return 0;
}
