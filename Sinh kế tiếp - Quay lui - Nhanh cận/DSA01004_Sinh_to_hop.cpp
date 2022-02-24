#include<iostream>
using namespace std;

int n, k, arr[30];
bool OK;

void print(){
	for(int i = 1; i <= k; i++)
		cout << arr[i];
	cout << " ";
}

void Try(){
	int i = k; 
	while(arr[i] == n - k + i){
		i--;
	}
	if(i > 0){
		arr[i] ++;
		for(int j = i + 1; j <= k; j++)
			arr[j] = arr[i] + j - i;
	}else{
		OK = true;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++)
			arr[i] = i;
		OK = false;
		while(!OK){
			print();
			Try();
		}
		cout << endl;
	}
}
