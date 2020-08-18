//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 469A - I wanna be the guy
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
    int n,i,j;
    cin >> n;
    int ara[2*n]={0};

    int a1;
    cin >> a1;
    for(j=0;j<a1;j++)
    {
        cin >> ara[j];
    }

    int a2;
    cin >> a2;
    for(i=0;i<a2;i++,j++)
    {
        cin >> ara[j];
    }

    int size,count=0;
    size = a1+a2;
    for(i=1; i<=n; i++)    
    {
        for(j=0;j<size; j++)
        {
            if(i==ara[j]) 
            {
                count++;
                break;
            }
        }
    }
    if(count==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";

return 0;
}
