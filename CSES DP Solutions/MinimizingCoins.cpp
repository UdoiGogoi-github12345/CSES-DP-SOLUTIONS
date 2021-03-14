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
 

 vector<int> dp(1000004,1e9);
void solve(){
   int n,sum;
   cin>>n>>sum;
   int coins[n];
   fo(i,0,n){
   	cin>>coins[i];
   }
   dp[0]=0;//minimum number of coins to make sum zero equals zero
   for(int i=1;i<=sum;i++){
   	for(int j=0;j<n;j++){
   		if(coins[j]<=i){
   			dp[i]=min(dp[i],1+dp[i-coins[j]]);
   		}
   	}
   }
   cout<<((dp[sum]!=1e9)?dp[sum]:-1)<<nl;

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
 