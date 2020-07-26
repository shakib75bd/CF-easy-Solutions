//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 339A -  Helpful Maths
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    st s;
    int p=0;
    getline(cin,s);
    char ara[s.length()];

    if(s.size()==1) cout<<s<<endl;
    else
    {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='+') continue;

                if(s[i]>='0' || s[i]<'0')  
                 {
                     ara[p] = s[i];
                     p++;
                 }
            }

            sort(ara,ara+p);

            for(int i=0; i<1; i++)
            {
                 cout<<ara[i];
            }

            for(int i=1; i<p; i++)
            {
                cout<< "+" <<ara[i];
            }
            cout<<endl;
    }

        return 0;
}
