//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 492B - Vnanya and Lanterns
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
    ll n,l;
    cin >> n >> l;
    int ara[n];
    
    for(int i=0;i<n;i++)
    {
        cin >>ara[i];
    }

    sort(ara,ara+n);
    dl j,maxdist=0,q=0;
    dl stbnd,stlast;
    int kk;
    kk=n-1;
    for(int i=0;i<n;i++)
    {
        j=ara[i]-q;
        maxdist=max(maxdist,j);
        q=ara[i];
        stbnd=ara[0];
        stlast=ara[kk];
    }
    dl kkkkk;
    dl ans,piu;
    piu=maxdist/2;
    kkkkk =  max(stbnd,(l-stlast));
    ans = max(piu,kkkkk);

    cout<<fxsp(10)<<ans;
    
return 0;
}
