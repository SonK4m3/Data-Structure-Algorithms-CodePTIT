#include<bits/stdc++.h>
using namespace std;

void process(int n){
	queue<int> q;
	q.push(9);
	while(true){
		int top = q.front();
		q.pop();
		if(top % n == 0){
			cout << top << endl;
			return;
		}
		q.push(top * 10 + 0);
		q.push(top * 10 + 9);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		process(n);
	}
}
