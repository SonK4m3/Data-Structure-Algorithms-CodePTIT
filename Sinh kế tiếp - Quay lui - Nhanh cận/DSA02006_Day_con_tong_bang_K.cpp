#include<bits/stdc++.h>
using namespace std;

int n, k;
int arr[20];
int B[20];
int res = 0;

void process(){
vector<int> v;
	int sum = 0;
	for(int i = 1; i <= n; i ++)
		if(B[i] == 0){
			v.push_back(arr[i - 1]);
			sum += arr[i - 1];
		}
	if(sum == k){
		res ++;
		sort(v.begin(), v.end());
		cout << "[";
		for(int i = 0; i < v.size(); i++){
			if(i == v.size() - 1)
				cout << v[i];
			else 
				cout << v[i] << " ";
		}
		cout << "] ";
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
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		res = 0;
		sort(arr, arr + n);
		Try(1);
		if(res == 0)
			cout << -1;
		cout << endl;	
	}
	return 0;
}


