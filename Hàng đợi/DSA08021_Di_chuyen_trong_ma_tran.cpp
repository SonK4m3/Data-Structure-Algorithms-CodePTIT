#include<bits/stdc++.h>
using namespace std;

int min(int a, int b){
	return (a > b) ? b : a;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m; 
		cin >> n >> m;
		
		int mat[n][m];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j ++)
				cin >> mat[i][j];
		
		int dp[n + 1][m + 1] = {0};
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++){
				dp[i + mat[i][j] - 1][j] += 1;
				dp[i][j + mat[i][j] - 1] += 1; 
			}
		
//		for(int i = 0; i < n; i++){
//			for(int j = 0; j < m; j++){
//				dp[i][j] = min(dp[i][j + mat[i][j] - 1], dp[i + mat[i][j] - 1][j]) + 1; 
//			}
//		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << dp[i][j] <<" ";
			cout << endl;
		}
	}
}
