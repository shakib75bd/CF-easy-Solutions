//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 271A - Beautiful Year
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
       int yr,count = 0;
       st year;
       cin >> year;
       yr = stoi(year) + 1;
       for(int i=yr; i <=9013; i++)
       {
           st yer = to_string(i);
           count =0;
           for(int j=0;j<4;j++)
           {
               if(j==1) break;
               if(yer[j] == yer[j+1] || yer[j] == yer[j+2] || yer[j]==yer[j+3]
               || yer[j+1] == yer[j+2] || yer[j+1] == yer[j+3] || yer[j+2] == yer[j+3])
               {
                   count++;
               }
               else count = count;
           }
           if(count==0)
           {
               cout<< yer << endl;
               break;
           } 
           else if(count>0) continue;
       }
}
