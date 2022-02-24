#include<iostream>
using namespace std;

int min(int i, int j){
	return (i < j) ? i : j;
}

int min(int i, int j, int k){
	return min(i, min(j, k));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dp[n+1];
		dp[0] = 0;
		dp[1] = 0;
		dp[2] = 1;
		dp[3] = 1;
		for(int i = 4; i <= n; i++){
			if(i % 2 == 0 && i % 3 == 0)
				dp[i] = min(dp[i/3], dp[i/2], dp[i - 1]) + 1;
			else if(i % 3 == 0)
				dp[i] = min(dp[i/3], dp[i - 1]) + 1;
			else if(i % 2 == 0)
				dp[i] = min(dp[i/2], dp[i - 1]) + 1;
			else 
				dp[i] =dp[i - 1] + 1;
		}
		cout << dp[n] << endl;
	}
}
