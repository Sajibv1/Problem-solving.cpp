// ﷽
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int x; 
    int even =0,odd=0,pos =0, neg =0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)  even ++; else odd++;
       if(x>0) pos++; if (x<0) neg++;
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;
    return 0;
}