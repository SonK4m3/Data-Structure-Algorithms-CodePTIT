#include<bits/stdc++.h>
using namespace std;

string s;
int n, arr[20];
bool ok[20];
int c[20];

void in(){
	for(int i = 1; i <= n; i++)
		cout << s[c[i] - 1];
	cout << " ";
}

void Try(int i){
	for(int j = 1 ; j <= n; j++){
		if(ok[arr[j]] == false){
			c[i] = arr[j];
			ok[arr[j]] = true;
			if(i == n)	in();
			else Try(i + 1);
			ok[arr[j]] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(ok, false, sizeof(ok));
		cin >> s;
		n = s.size();
		for(int i = 1; i <= n; i++)
			arr[i] = i;
		Try(1);	
		cout << endl;
	}
	
}

