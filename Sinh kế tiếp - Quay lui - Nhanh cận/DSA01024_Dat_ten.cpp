#include<bits/stdc++.h>
using namespace std;

int n, k, arr[15], res;
int C[16];
bool ok[15], check;
vector<string> v;

void process(){
	for(int i = 1; i <= k; i++)
		cout << v[C[i] - 1] <<" ";
	cout << endl;
}

void Try(int i){
	for(int j = C[i - 1] + 1; j <= n - k + i; j ++){
		C[i] = j;
		if(i == k){
			process();
		}
		else 
			Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	set<string> s;
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		s.insert(str);
	}
	
	set<string> :: iterator i;
	for(i = s.begin(); i != s.end(); i++)
		v.push_back(*i);
	n = v.size();
	sort(v.begin(), v.end());
	Try(1);
}
