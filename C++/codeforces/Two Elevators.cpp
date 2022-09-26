#include <bits/stdc++.h>
#define whilet    int t ; cin>>t ;while(t--)
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long
ll ch [2000006];
using namespace std;
int  main(){ FIO;
ll a , b , c  ;
        whilet
        {
            cin>>a>>b>>c;
            int f ;
            if (b<c )f=(c-b)+c;
            else f= b;
            if (f==a )cout<<3<<endl;
            else if (f>a){cout<<1<<endl;}
            else cout<<2<<endl;
        }
 
 
 return 0;
 
}
