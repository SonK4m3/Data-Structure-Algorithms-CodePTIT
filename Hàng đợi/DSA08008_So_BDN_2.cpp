#include<iostream>
#include<queue>
using namespace std;
#define ll long long

void process(ll n){
	queue<ll> q;
	q.push(1);
	while(true){
		ll top = q.front();
		q.pop();
		if(top % n== 0){
			cout << top << endl;
			break;
		}
		q.push(top * 10 + 0);
		q.push(top * 10 + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		process(n);
	}
}
