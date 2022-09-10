#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include <bits/stdc++.h>
#define  endl  '\n'
#define  cinarr   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
#define  zero   for(int i =0 ; i<n ; i++)
#define  one   for(int i =1 ; i<=n ; i++)
#define whilet    int t ; cin>>t ;while(t--)
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long

using namespace std;
 int  main(){

     FIO;
 ll n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	ll a = arr[0], b = arr[0];
	for (int i = 1; i < n; i++)
	{
		b = max(arr[i], b + arr[i]);
		a = max(a, b);
	}
	cout << a << endl;

    return 0;
}
 
