
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
whilet{
 ll n,c ; cin>>n>>c;
 ll arr[n];
 ll freq[101]={0};
 
 zero{cin>>arr[i];}
 for(int i =0 ; i< n; i++)
 {
     freq[arr[i]]++;
 }
 
 
 int sum =0;
 for (int i =0 ;i<101 ; i++)
 {
 
     if (freq[i]> 1){
        if (freq[i]<=c){sum+=freq[i];}
        else {sum+=c;}
        }//cout<<"the i th is : "<<i<<" the freq of i "<<freq[i]<<endl;}
    else if (freq[i]==1){sum+=1;}//cout<<"the i the is : "<<i<<"  the freq of i : "<<freq[i]<<endl;}
 
}
cout<<sum<<endl;}
  return 0;
}
 
