#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long arr[n];
		long long Min = INT_MAX;
		for(long i = 0; i < n; i++){
			cin >> arr[i];
			if(Min > arr[i])
				Min = arr[i];
		}
		long res = 0;
		long index;
		for(int i = 0 ; i < n; i++){
			if(arr[i] == Min){
				index = i;
				break;
			}
		}
		
		cout << index << endl;
	}
	return 0;
}
