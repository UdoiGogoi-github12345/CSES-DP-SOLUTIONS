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
  int sum=(n*(n+1))/2;
  if(sum%2!=0){
  	cout<<0<<nl;
  	return;
  }
  sum=sum/2;
  int arr[n];
  for(int i=0;i<n;i++){
  	arr[i]=i;
  }
  int dp[n+1][sum+1];
  for(int i=1;i<=sum;i++){
  	dp[0][i]=0;
  }
  for(int i=0;i<=n;i++){
  	dp[i][0]=1;
  }
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=sum;j++){
  		if(arr[i-1]<=j){
  			(dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]])%=mod;
  		}
  		else{
  			(dp[i][j]=dp[i-1][j])%=mod;
  		}
  	}
  }
  cout<<dp[n][sum]<<nl;

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
 