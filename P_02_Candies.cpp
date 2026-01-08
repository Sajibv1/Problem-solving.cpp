#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int x,y;
cin>>x;
cin>>y;
int sum =0;
for(int i=x;i<=y;i++)
{
sum = sum + arr[i];
}
cout<<sum;
    return 0;
}