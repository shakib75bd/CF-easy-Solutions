//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 59A - WORD
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
    st s;
    int count1 = 0, count2 = 0;
    cin >> s;
    for(int i=0;i<=s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z') count1++;
        else if(s[i]>='A' && s[i]<='Z') count2++;
    } 
    if(count2>count1) 
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >=97 && s[i]<=122) s[i] = s[i]-32;
        }
    }
    else
    {
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >=65 && s[i]<=92) s[i] = s[i]+32;
        }
    }
    cout <<s<<endl;
    
}
