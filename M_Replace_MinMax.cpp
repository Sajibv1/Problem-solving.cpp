#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<double> x(n);
    for(int i=0; i<x.size(); i++)
    {
        cin>>x[i];
    }
    int minin=0, maxin=0;
    for(int i=1; i<x.size(); i++)
    {
        if(x[i]>x[maxin]) maxin = i;
        if(x[i]<x[minin]) minin = i;
    }
    swap(x[minin],x[maxin]);
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}