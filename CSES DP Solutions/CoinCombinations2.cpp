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
 
 
 


int dp[105][1000005];
void solve(){
  int n,sum;
  cin>>n>>sum;
  int coins[n];
  fo(i,0,n){
  	cin>>coins[i];
  }
  for(int i=1;i<=sum;i++){
  	dp[0][i]=0;
  }
  for(int j=0;j<=n;j++){
  	dp[j][0]=1;
  }
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=sum;j++){
  		if(coins[i-1]<=j){
  			(dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]])%=mod;
  		}
  		else{
  			(dp[i][j]=dp[i-1][j])%=mod;
  		}
  	}
  }
  cout<<dp[n][sum];
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
 