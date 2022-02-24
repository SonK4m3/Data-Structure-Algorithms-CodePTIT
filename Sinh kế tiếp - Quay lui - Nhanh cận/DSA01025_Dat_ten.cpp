#include<iostream>
using namespace std;

int n, k;
bool ok;
int C[20];

void print(){
	for(int i = 1; i <= k; i++){
		cout << char(C[i] - 1 + 'A');
	}
	cout << endl;
}

void Try(){
	int i = k;
	while(C[i] == n - k + i)
		i--;
	if(i > 0){
		C[i]++;
		for(int j = i + 1; j <= k; j++)
			C[j] = C[i] + j - i;
	}
	else 	ok = true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++)
			C[i] = i;
		ok = false;
		while(!ok){
			print();
			Try();
		}
	}
}
