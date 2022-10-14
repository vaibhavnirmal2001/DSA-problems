#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	 string s;
	 cin>>s;
	 int n=s.length();
     long long int dp[n+1];
     dp[n]=1;
     dp[n-1]=1;
     for(int i=s.length()-2; i>=0; i--){
         if(s[i]==s[i+1]){
          dp[i]=dp[i+1];
         }
         else{
             dp[i]=(dp[i+1]+dp[i+2]);
             dp[i]=dp[i]%998244353;
         }
     }
     cout<<dp[0]<<"\n";
	}
	return 0;
}

