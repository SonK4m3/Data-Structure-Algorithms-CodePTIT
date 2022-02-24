#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a[1000005], b[1000005], c[1000005];
void process(){
	cin >> n;
	for(ll i = 0;i < n; i++){
		cin >> a[i];
	}
	stack<ll> val, pos;
	for(ll i = 0; i < n; i++){
		while(val.size() && a[i] > val.top()){
			b[pos.top()] = i;
			val.pop(); pos.pop();
		}
		val.push(a[i]);
		pos.push(i);
	}
	while(val.size()){
		b[pos.top()] = -1;
		val.pop();
		pos.pop();
	}
	for(ll i = 0; i < n; i++){
		while(val.size() && a[i] < val.top()){
			c[pos.top()] = i;
			val.pop();
			pos.pop();
 		}
 		val.push(a[i]);
 		pos.push(i);
	}
	while(val.size()){
		c[pos.top()] = -1;
		val.pop();
		pos.pop();
	}
	for(ll i = 0; i < n; i++){
		if(b[i] != -1 && c[b[i]] != -1)
			cout << a[c[b[i]]] <<" ";
		else
			cout << -1 << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		process();	
	}
	return 0;
}
