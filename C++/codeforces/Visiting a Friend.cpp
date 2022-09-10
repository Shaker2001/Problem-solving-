 
#include <bits/stdc++.h>
#define ll   long long
int  main(){
 
     FIO;
    ll n ,k; cin>>n>>k;
    int step =k;
    int reach=0;
    while(n--)
    {
        int a, b; cin>>a>>b;
        if (a <= step && reach != k && b>=reach)
        {
                    reach=b;
                    step=b;
                }
 
 
    }
    if (reach == k)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    return 0;
}
 
