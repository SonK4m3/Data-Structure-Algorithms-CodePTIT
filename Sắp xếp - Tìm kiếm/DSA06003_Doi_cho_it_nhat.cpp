#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(){	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}	
		sort(b, b + n);
		
		int res = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != b[i])
				for(int j = i + 1; j < n; j++){
					if(a[j] == b[i]){
						res ++;
						swap(a[i], a[j]);
						break;
					}
				}
		}
		cout << res << endl;
	}
}
