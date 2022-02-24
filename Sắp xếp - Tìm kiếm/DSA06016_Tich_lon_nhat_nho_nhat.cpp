#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll min(ll a, ll b){
	return (a < b) ? a : b;
}

ll max(ll a, ll b){
	return (a < b) ? b : a;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, m;
		cin >> n >> m;
		ll Max = INT_MIN, Min = INT_MAX;
		for(ll i = 0; i < n; i++){
			ll x;
			cin >> x;
			Max = max(Max, x);
		}
		for(ll i = 0; i < m; i++){
			ll x;
			cin >> x;
			Min = min(Min, x);
		}
		cout << Min * Max << endl;
	}
}
