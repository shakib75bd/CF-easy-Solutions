//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 510A - Fox and Snake
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur
#include<bits/stdc++.h>
using namespace std;
 
#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char
#define tc ll t;cin>>t;while(t--)
 
int main()
{
    int n,m;
    cin >> n >> m;
    int p=1;
    while(n--)
    {
       for (int j=1;j<=m;j++)
       {
            if(p%2 == 1) cout<<"#";
            else if (p%4==2&&j==m) printf("#");
		    else if (p%4==0&&j==1) printf("#");
		    else printf(".");
       }
       cout<<endl;
       p++;             
    }
return 0;
}
