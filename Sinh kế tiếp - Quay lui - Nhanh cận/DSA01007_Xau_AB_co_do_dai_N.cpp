#include<bits/stdc++.h>
using namespace std;

void process(int n){
	queue<string> q;
	q.push("A");
	q.push("B");
	
	while(true){
		string tmp = q.front();
		q.pop();
		if(tmp.size() > n)
			break;
		if(tmp.size() == n)
			cout << tmp << " ";
		q.push(tmp + "A");
		q.push(tmp + "B");
	}
	
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		process(n);
	}
	
	return 0;
}
