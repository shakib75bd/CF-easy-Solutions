//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 677A - Venya and Fence
//  Lang: C++
//  ©: _Shakib Hossen Shanto   _ CSE Dept__Begum Rokeya University,Rangpur

#include<bits/stdc++.h>
using namespace std;

#define uns unsigned
#define ll long long
#define dl double
#define st string
#define ch char

int main()
{
     int n,h,a,count=0,count2=0;
     cin >> n >> h;
     for(int i=0;i<n;i++)
     {
         cin >> a;
         if(a<=h) count++;
         else if(a>h) count2++;
     } 
     cout << count + (count2 * 2) <<endl; 
return 0;
}
