#include<bits/stdc++.h>
using namespace std;

int n, arr[15], res;
int C[16];
bool ok[15], check;

void process(){
	res ++;
	check = true;
	for(int i = 1; i <= n; i++){
		if(C[i] != arr[i - 1]){
			check = false;
			return;
		}
	}
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(ok[j] == false){
			C[i] = j;
			ok[j] = true;
			if(i == n){
				process();
				if(check == true){
					cout << res << endl;
					return;
				}
			}
			else Try(i + 1);
			ok[j] = false;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		res = 0;
		memset(ok, false, sizeof(ok));
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		Try(1);	
	}
}
