#include<bits/stdc++.h>
using namespace std;

long min(long a, long b){
	return (a < b) ? a : b;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		long Min = arr[0];
		long preMin = Min;
		for(int i = 1; i < n; i++){
			if(arr[i] < Min && arr[i] < preMin){
				preMin = Min;
				Min = arr[i];
			}
			else if(arr[i] < preMin && arr[i] > Min)
				preMin = arr[i];
		}
		if(Min == preMin)
			cout << -1 << endl;
		else
			cout << Min <<" "<< preMin << endl;
	}
}
