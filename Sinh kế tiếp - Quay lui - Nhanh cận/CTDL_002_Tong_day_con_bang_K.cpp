#include<bits/stdc++.h>
using namespace std;

int n, k;
int arr[20];
int B[20];
int res = 0;

void process(){
	int sum = 0;
	for(int i = 1; i <= n; i ++)
		if(B[i] == 1){
			sum += arr[i - 1];
		}
	if(sum == k){
		res += 1;
		for(int i = 1; i <= n; i++){
			if(B[i] == 1)
				cout << arr[i - 1] << " ";
		}
		cout << endl;
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		B[i] = j;
		if(i == n)	
			process();
		else 
			Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	Try(1);
	cout << res;
	return 0;
}
