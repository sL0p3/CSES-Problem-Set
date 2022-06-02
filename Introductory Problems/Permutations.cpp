#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n ;
    cin>>n;
    string s="";
    if (n==1) cout<<1<<endl;
    else if (n<5) cout<<"NO SOLUTION"<<endl;
    else {
        for (int i = 1;i<=n;i++){
            if (i%2== 0 ) cout<<i<<" ";
            else s+= to_string(i)+" ";
        }
        cout<<s<<endl;
    }
    return 0;
}