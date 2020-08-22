//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 141A - Amusing Jokes
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
    st s1,s2,s3,main;
    cin >> s1 >> s2;

    main=s1+s2;
    sort(main.begin(),main.end());

    cin >> s3;
    sort(s3.begin(),s3.end());

    if(s3==main) cout<<"YES\n";
    else cout<<"NO\n";

return 0;
}
