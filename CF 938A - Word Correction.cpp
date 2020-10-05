//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 938A - Word Correction
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
 
 
bool isVowel(ch c)
{
    if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u' || c=='y') return true;
    return false;
}
 
 
int main()
{
    int n,aa=0;
    cin >> n;
 
    ch ara[n];
    for(int i=0;i<n;i++) cin >> ara[i];
 
    vector<char>vec;
    vec.push_back(ara[0]);
 
    for(int i=1;i<n;i++)
    {
        if(isVowel(ara[i]) && isVowel(ara[i-1])) aa++;
        else vec.push_back(ara[i]);
    }
 
    for(int i=0;i<vec.size();i++) cout<<vec[i];
 
    return 0;
}
