//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name:  CF 266A - stones on the Table
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    uns n;
    int count=0;
    st s;

    cin >> n >> s;

    for(int i=0; i<n; i++)
    {
        if(s[i]==s[i+1]) count++;
    }

    cout << count << endl;

return 0;
}
