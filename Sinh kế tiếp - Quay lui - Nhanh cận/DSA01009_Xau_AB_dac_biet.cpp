#include<iostream>
#include<vector>
using namespace std;

int n, k;
int C[20];
vector<string> v;

void process(){
	int cnt = 0;
	int appear = 0;
	for(int i = 1; i <= n; i ++){
		if(C[i] == 0){
			cnt ++;
		}
		if(C[i] == 1 || i == n){
			if(cnt == k)
				appear ++;
			cnt = 0;
		}
	}
		
	if(appear == 1){
		string tmp = "";
		for(int i = 1; i <= n; i++){
			tmp += (C[i] == 0) ? "A" : "B";
		}
		v.push_back(tmp);
	}
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		C[i] = j;
		if(i == n)
			process();
		else 
			Try(i + 1);
	}
}

int main(){
	cin >> n >> k;
	Try(1);
	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}
