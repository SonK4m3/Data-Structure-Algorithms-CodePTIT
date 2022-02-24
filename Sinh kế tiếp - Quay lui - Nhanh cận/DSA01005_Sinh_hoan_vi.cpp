#include<iostream>
using namespace std;

int n;
int C[20];
bool OK;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(){
	for(int i = 1; i <= n; i++){
		cout << C[i];
	}
	cout << " ";
}

void Try(){
	int j = n - 1;
	while(j > 0 && C[j] > C[j + 1])
		j--;
	if(j > 0){
		int k = n;
		while(C[j] > C[k])
			k--;
		swap(C[j], C[k]);
		int r = j + 1, l = n;
		while(r <= l){
			swap(C[r], C[l]);
			r++; l--;
		}
	}else{
		OK = true;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		OK = false;
		for(int i = 1; i <= n; i++)
			C[i] = i;
		while(!OK){
			print();
			Try();
		}
		cout << endl;
	}
}
