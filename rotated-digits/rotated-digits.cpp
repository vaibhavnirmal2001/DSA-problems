class Solution {
public:
  int rotatedDigits(int N) {
  //3,4,7 invalid ->0
  //0,1,8 valid ->1
  //2,5,6,9 good ->2
  vector<int> dp(N+1,0);
  int cnt=0;
  for(int i=0;i<=N;++i){
	if(i<10){
	  if(i==0 || i==1 || i==8) dp[i]=1;
	  else if(i==2 || i==5 || i==6 || i==9) dp[i]=2,++cnt; 
	}else{
	  if(dp[i/10]==1 && dp[i%10]==1) dp[i]=1;
	  else if(dp[i/10]>=1 && dp[i%10]>=1) dp[i]=2,++cnt;
	}
  }
  return cnt;
}
};