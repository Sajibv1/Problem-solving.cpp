// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
 cin>>n;
vector<int> arr(n);

for(int i=0;i<arr.size();i++)
{
    cin>>arr[i];
}
for(int i=0;i<arr.size();i++)
{
    if(arr[i]!=arr[arr.size()-i-1])
    {cout<<"NO"<<endl;
    return 0;}
}

cout<<"YES"<<endl;
    return 0;
}