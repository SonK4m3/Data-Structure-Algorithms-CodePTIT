#include<iostream>
#include<queue>
using namespace std;
#define ll long long

void process(ll n){
	ll res = 0;
	queue<ll> q;
	q.push(1);
	while(true){
		ll top = q.front();
		q.pop();
		if(top <= n){
			res ++;
		}else
			break;
		q.push(top * 10 + 0);
		q.push(top * 10 + 1);
	}
	cout << res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		process(n);
		cout << endl;
	}
}
