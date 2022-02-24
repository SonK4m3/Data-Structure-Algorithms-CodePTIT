#include<iostream>
#include<queue>
#include<vector>
using namespace std;
#define ll long long

void process(ll n){
	vector<string> v;
	queue<string> q;
	q.push("6");
	q.push("8");
	while(true){
		string top = q.front();
		q.pop();
		if(top.size() > n)
			break;
		else{
			v.push_back(top);
		}
		q.push(top + "6");
		q.push(top + "8");
	}
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++)
		cout << v[i] <<" ";
	cout << endl;
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
