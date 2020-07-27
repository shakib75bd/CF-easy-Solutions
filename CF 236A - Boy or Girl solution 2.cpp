//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name:  CF 236A - Boy or Girl (without using set, by using nested loop)
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
    st s;
    cin >> s;
    int count=0, main_count;
 
    for(int i=0;i<s.size(); i++)
    {
        for(int j=0;j<(i);j++)
        {
            if(s[i]==s[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==0) main_count = s.size();
    else if(count>0) main_count = s.size() - count;
 
    if((main_count % 2) != 0) cout << "IGNORE HIM!\n";
    else cout << "CHAT WITH HER!\n";
 
return 0;
}


//If you dont know how to use set, then this solution is for you!
