#include<bits/stdc++.h>
using namespace std;

int n, k;
int C[10];
bool ok[10];
int mat[10][10];
int res = 0;

vector<vector<int> > v;

void print(){
	int row = 0;
	int sum = 0;
	for(int i = 1; i <= n; i ++){
		sum += mat[row][C[i] - 1];
		row ++;
	}
	if(sum == k){
		vector<int> tmp;
		for(int i = 1; i <= n; i++){
			tmp.push_back(C[i]);
		}
		v.push_back(tmp);
	}
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(ok[j] == false){
			C[i] = j;
			ok[j] = true;
			if(i == n) print();
			else	Try(i + 1);
			ok[j] = false;
		}
	}
}


int main(){
	
	cin >> n >> k;
		
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> mat[i][j];
	
	for(int i = 0; i <= n; i++){
		ok[i] = false;
	}
	
	Try(1);
	
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
}
