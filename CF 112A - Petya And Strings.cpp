//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 112A - Petya And Strings
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
    st s1,s2;

    cin >> s1;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i] >=65 && s1[i]<=92) s1[i] = s1[i]+32;
    }

    cin >> s2;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i] >=65 && s2[i]<=92) s2[i] = s2[i]+32;
    }

    if(s1==s2) cout<<"0\n"; 
    else if(s1>s2) cout<<"1";
    else if(s1<s2) cout<<"-1";
 
return 0;
}


//As there is no case sensitivity , we have to make all alph. lowercase/uppercase, then simply compare this two string
