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
 
 ll ed(str s1,str s2,ll n,ll m){
 	ll dp[n+1][m+1];
 	for(ll i=0;i<=n;i++)
 		dp[i][0]=i;
 	for(ll j=0;j<=m;j++)
 		dp[0][j]=j;
 	for(ll i=1;i<=n;i++){
 		for(ll j=1;j<=m;j++){
 			if(s1[i-1]==s2[j-1])
 				dp[i][j]=dp[i-1][j-1];
 			else
 				dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
 		}
 	}
 	return dp[n][m];
 }
void solve(){
  str a;
  str b;
  cin>>a;
  cin>>b;
  ll n=a.length();
  ll m=b.length();
  ll ans=ed(a,b,n,m);
  cout<<ans<<nl;
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