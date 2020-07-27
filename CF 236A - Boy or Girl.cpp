//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 236A - Boy or Girl
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
    st s;
    set <ll> distinct;
    cin >> s;
    int count=0, main_count;

    for(int i=0;i<s.size(); i++)
    {
        distinct.insert(s[i]);           
    }
    
    if(( distinct.size() % 2) != 0) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";

return 0;
}


//We have to make a set , becuuse if we put all string element 
//in a set , It's size will simply count distinct char's
