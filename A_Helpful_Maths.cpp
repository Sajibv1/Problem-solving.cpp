#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s; vector<int>arr;
    for(int i=0;i<s.size();i++)     
    {
        if(s[i]!='+')  arr.push_back(s[i]-'0');
    } 
    for(int i=0;i<arr.size()-1;i++)
    {
        int minin =i;
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<arr[minin]) minin = j;
        }
        swap(arr[i],arr[minin]);
    }
    
   for(int i=0;i<arr.size();i++)
    {   cout<<arr[i];
        if(i!=arr.size()-1) cout<<"+";
        else cout<<endl;
    }


 
 
    return 0;
}