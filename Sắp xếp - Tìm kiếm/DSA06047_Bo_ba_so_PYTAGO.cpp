#include<bits/stdc++.h>
using namespace std;

bool isPytago(int n, long long arr[]){
	sort(arr, arr + n);

	for(int i = n - 1; i >= 2; i--){
		int l = 0, r = i - 1;
		while(l < r){
			if(arr[r] + arr[l] == arr[i])
				return true;
			else if(arr[r] + arr[l] < arr[i]){
				l++;
			}
			else r--;
		}
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long arr[n];
		for(int i = 0; i < n; i++){
			long long x; 
			cin >> x;
			arr[i] = x * x;
		}
		
		(isPytago(n, arr) == true) ? cout << "YES" : cout << "NO";
		cout << endl;
	}
	
	return 0;
}
