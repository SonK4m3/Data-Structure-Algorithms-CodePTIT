#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n+5];
		vector<int> v;
		for(int i = 0; i < 10; i++){
			v.push_back(-1);
		}
		for(int i = 0 ; i < n;i++)
		cin >> a[i];
		for(int i = 0; i <n;i ++){
			for(int j = 0; j < a[i].size(); j ++){
				v[a[i][j] - '0'] = a[i][j] - '0';
			}
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < 10; i++){
			if(v[i] != -1)
			cout << v[i] << " ";
		}
		cout<< endl;	
	}
	return 0;
}

