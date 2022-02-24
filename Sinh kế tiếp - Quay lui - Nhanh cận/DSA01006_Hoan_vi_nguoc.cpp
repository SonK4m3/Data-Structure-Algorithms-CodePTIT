#include<bits/stdc++.h>
using namespace std;
bool b[20];int x[20];
void printArray(int a[], int n){
	for (int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout <<" ";
}
void dequy(int k, int n){
	
	for (int i = n; i >= 1; i--){
		if (b[i]){
			x[k] = i;
			if (k == n){
				printArray(x, n);
			} else {
				b[i] = false;
				dequy(k + 1, n);
				b[i] = true;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		memset(b, true, sizeof(b));
		int n;
		cin >> n;
		dequy(1, n);
		cout << endl;
	}
}

