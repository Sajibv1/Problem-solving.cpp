#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
string a;
string b;
cin>>a;
cin>>b;
transform(a.begin(), a.end(), a.begin(), ::tolower);
transform(b.begin(), b.end(), b.begin(), ::tolower);
if(a<b) cout<<"-1";
if(a>b) cout<<"1";
if(a==b) cout<<"0";



return 0;

}