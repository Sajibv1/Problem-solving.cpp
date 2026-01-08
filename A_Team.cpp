// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int n; cin>>n;
   int slved =0;
 for(int i=1;i<=n;i++)
 {
    int arr[3];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
   int sum = arr[0]+arr[1]+arr[2];
   if(sum>=2)  slved++;
 }
 cout<<slved<<endl;
    return 0;
}