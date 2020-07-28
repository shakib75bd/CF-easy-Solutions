//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 546A - Soldier and Bananas
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
    int k, w;
    ll n,temp;
    cin >> k >> n >> w;
    temp = 0;
    ll temp2 =0;
    for(int i=1; i<=w; i++)
    {
        temp = temp+k;
        temp2 = temp+ temp2;
    }
    if(temp2>n)  cout << temp2-n <<endl;
    else cout<<"0\n";

return 0;  
}
