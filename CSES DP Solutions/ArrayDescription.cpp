
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
  int n,m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  int dp[n][m+1];
  memset(dp,0,sizeof(dp));
  	if(a[0]==0){
      for(int i=0;i<=m;i++){
      	dp[0][i]=1;
      }
  	}
  	else{
  		dp[0][a[0]]=1;
  	}
  	for(int i=1;i<n;i++){
  		if(a[i]==0){
          for(int j=1;j<=m;j++){
          	for(int k:{j-1,j,j+1}){
          		if(k>=1 and k<=m){
          			(dp[i][j]+=dp[i-1][k])%=mod;
          		}
          	}
          }
  		}else{
  			int x=a[i];
  			for(int k:{x-1,x,x+1}){
  				if(k>=1 and k<=m){
  					(dp[i][x]+=dp[i-1][k])%=mod;
  				}
  			}
  		}
  	}
  	int ans=0;
  	for(int i=1;i<=m;i++){
  		(ans+=dp[n-1][i])%=mod;
  	}
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
 