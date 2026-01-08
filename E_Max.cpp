// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   


int n;
cin>>n;

int x ;
cin>>x;
int max = x;
for(int i=2;i<=n;i++)
{
   cin>>x;
   if(x>max) {max =x;}
}

cout<<max<<endl;




    return 0;
}