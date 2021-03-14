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
   int a[n];
   ll sum=0;
   fo(i,0,n){
   	cin>>a[i];
   	sum+=a[i];
   }
   ll dp[n][n];
   for(int i=n-1;i>=0;i--){
   	for(int j=i;j<n;j++){
        if(i==j){
        	dp[i][j]=a[i];
        }
        else{
        	dp[i][j]=max(a[i]-dp[i+1][j],a[j]-dp[i][j-1]);
        }
   	}
   }
    cout << (sum+dp[0][n-1])/2 << endl;
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
 