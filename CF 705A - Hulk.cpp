//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 705A - Hulk
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
    if(n==1) cout<<"I hate it";

    else
    {
        cout<<"I hate ";
        for(int i=1;i<=(n-1);i++)
        {
            if(i%2>0) cout<<"that I love ";
            else cout<<"that I hate ";
        }
        cout<<"it\n";
    }
    
return 0;
}
