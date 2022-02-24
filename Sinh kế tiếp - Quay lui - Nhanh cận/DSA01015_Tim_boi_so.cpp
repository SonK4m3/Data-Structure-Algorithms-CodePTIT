#include<iostream>
#include<queue>
using namespace std;

#define ll long long

void process(ll n){
	queue<ll> q;
	q.push(9);
	while(true){
		ll top = q.front();
		q.pop();
		if(top % n == 0){
			cout << top << endl;
			return;
		}
		q.push(top*10 + 0);
		q.push(top*10 + 9);
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
