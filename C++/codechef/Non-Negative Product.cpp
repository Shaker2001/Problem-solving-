
#include<algorithm>
#include <bits/stdc++.h>
#define  endl  '\n'
#define  cinarr0   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
#define  cinarr1   int n; cin>>n; int arr[n+1]={0}; for (int i=1; i<=n; i++){cin>>arr[i];}
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define  zero   for(int i =0 ; i<n ; i++)
#define  one   for(int i =1 ; i<=n ; i++)
#define whilet    int t ; cin>>t ;while(t--)
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long

using namespace std;



int main(){ FIO;

  whilet
 {cinarr0

 bool ch0=false;bool ch1=false;int cnt =0;
 zero
 {
     if (arr[i]<0){ch1=true;cnt++; }
     else if (arr[i]==0)ch0=true;
 }
 //cout<<"the counter : "<<cnt<<endl;
 if (ch0)cout<<0<<endl;
 else if (ch1 && cnt %2!=0)
 {
     cout<<1<<endl;
 }
 else if (ch1&& cnt%2==0)
 {
     cout<<0<<endl;
 }
 else
    cout<<0<<endl;

 }
        return 0;
}
