#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);
		for(int i = n - 1; i >= 0; i--){
			if(k == 0)
				break;
			cout << arr[i] << " ";
			k--;
		}
			
		cout << endl;
	}
}
