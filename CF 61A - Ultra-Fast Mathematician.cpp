//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 61A - Ultra-Fast Mathematician
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
    int count = 0;
    cin >> s1 >> s2;
    char ara[s1.size()];
 
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i] == s2[i]) ara[i] = '0';
        else ara[i] = '1';
    } 
 
    for(int i=0;i<s1.size();i++)
    {
        cout<<ara[i];
    }
    cout<<endl;
 
return 0;  
}
