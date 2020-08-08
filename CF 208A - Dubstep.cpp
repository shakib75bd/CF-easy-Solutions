//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 208A - Dubstep
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
    int count=0;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(count==0)
        {
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') continue;
            if(s[i]=='B' && s[i-1]=='U' && s[i-2]=='W') continue;
            if(s[i]=='U' && s[i-1]=='W' && s[i+1]=='B') continue;
            else   
            {
            cout<<s[i];
            count++;
            } 
        }
        
        else if(count>0)
        {
            
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') continue;
            if(s[i]=='B' && s[i-1]=='U' && s[i-2]=='W') continue;
            if(s[i]=='U' && s[i-1]=='W' && s[i+1]=='B') 
            {
                cout<<" ";
                continue;
            }
            else   
            {
            cout<<s[i];
            count++;
            } 
        }  
    }
    cout<<endl;

return 0;  
}
