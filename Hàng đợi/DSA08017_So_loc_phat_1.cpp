#include<bits/stdc++.h>
using namespace std;

void process(int n){
	vector<string> v;
	queue<string> q;
	q.push("6");
	q.push("8");
	while(true){
		string tmp = q.front();
		q.pop();
		if(tmp.size() > n)
			break;
		v.push_back(tmp);
		q.push(tmp + "6");
		q.push(tmp + "8");
	}
	for(int i = v.size() - 1; i >= 0; i--)
		cout << v[i] <<" ";
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
}
