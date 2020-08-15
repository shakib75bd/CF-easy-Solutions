//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 344A - Magnets
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;    
 

int main()          
{
    int n, count = 0;
    cin >> n;

    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin >> ara[i];
    }

    for(int i=0; i<n; i++)
    {
        if(ara[i] != ara[i+1]) count++;
    }

    cout<< count <<endl;

return 0;
}
