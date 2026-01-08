#include<bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false);

int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=n-1;i>=0;i--)
{
cout<<arr[i]<<" ";
}
return 0;
}