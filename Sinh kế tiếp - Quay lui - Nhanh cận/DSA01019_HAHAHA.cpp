#include<iostream>
using namespace std;

int n;
int C[20];

void print(){
	for(int i = 1; i < n; i++){
		if(C[i] == 1 && C[i] == C[i + 1])
			return;
	}
	
	if(C[1] != 1 || C[n] != 0)
		return;
	
	for(int i = 1; i <= n; i++)
		(C[i] == 1) ? cout << "H" : cout << "A";
	cout << endl;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		C[i] = j;
		if(i == n){
			print();
		}
		else 
			Try(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
}
