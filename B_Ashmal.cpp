#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        

    for(int i=0; i<n; i++)
    {

        int a;
        cin>>a;
        vector<string>strs(a);
        for(int j=0; j<a; j++)

        {
            cin>>strs[j];
        }
    
sort(strs.begin(),strs.end());
string x="";
for(int j=0;j<strs.size();j++) { x = x+ strs[j] ;}
cout<<x<<endl;
    }
        
   return 0;  }
   
