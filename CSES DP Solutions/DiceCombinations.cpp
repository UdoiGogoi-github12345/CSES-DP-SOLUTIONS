#define ONLINE_JUDGE
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

#define ll long long
#define ld long double

#define dairymilk6969 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define all(a) a.begin(),a.end()

#define pb push_back

const ll INF = 1e18 ;

const ll N = 2e5 + 7;
const int mod = 1e9 + 7;
 



void solve(){
   int n;
   cin>>n;
   vector<int> dp(n+1,0);
   dp[0]=1;
   for(int i=1;i<=n;i++){
     for(int j=1;j<=6 and i-j>=0;j++){
     	dp[i]=dp[i]+dp[i-j];
     	dp[i]%=mod;
     }
   }
   cout<<dp[n];
}
int main()
{
	dairymilk6969
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	 ll t=1;
	 //cin>>t;
	 while(t--){
	 	   solve();
	   }
}
 