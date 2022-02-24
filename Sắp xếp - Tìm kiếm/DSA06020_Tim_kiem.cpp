#include<bits/stdc++.h>
using namespace std;

int BinSearch(int arr[], int n, int k){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (r + l) / 2;
		if(arr[m] == k)
			return 1;
		else if(arr[m] < k)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		
		cout << BinSearch(arr, n, k) << endl;
	}
	return 0;
}
