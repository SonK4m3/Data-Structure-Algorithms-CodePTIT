#include<bits/stdc++.h>
using namespace std;

int n, k, arr[15], res;
int C[16];
bool ok[15], check;

void process(){
	res ++;
	check = true;
	for(int i = 1; i <= k; i++){
		if(C[i] != arr[i - 1]){
			check = false;
			return;
		}
	}
	cout << endl;
}

void Try(int i){
	for(int j = C[i - 1] + 1; j <= n - k + i; j ++){
		C[i] = j;
		if(i == k){
			process();
			if(check == true){
				cout << res << endl;
				return;
			}
		}
		else 
			Try(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		res = 0;
		cin >> n >> k;
		for(int i = 0; i <= k; i++)
			C[i] = i;
		for(int i = 0; i < k; i++){
			cin >> arr[i];
		}	
		Try(1);	
	}
}
