//           ––=‹‹BISMILLAHITR RAHMANIR RAHIM››=––
//  Problem name: CF 144A - Arrival of the General (using vector)
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
    int n;
    cin >> n;
    vector<int> vec;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int maxx=0;
    int minn=101;

    for(int i=0; i<vec.size(); i++)
    {
        maxx = max(vec[i], maxx);
        minn = min(vec[i], minn);
    }
    

    int count1, count2, mer;

    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i]==maxx)
        {
            count1= i;
            break;
        }
    }
    for(int i=(vec.size()-1); i>=0; i--)
    {
        if(vec[i]==minn)
        {
            count2 =(n - (i+1));
            mer=i;
            break;
        }
    }

    if(count1<mer) cout<< count1 + count2 <<endl;
    else cout<< (count1+count2) - 1<<endl;

    return  0;

}
