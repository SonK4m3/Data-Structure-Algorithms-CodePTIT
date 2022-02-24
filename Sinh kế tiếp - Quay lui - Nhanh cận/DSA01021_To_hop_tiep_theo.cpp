#include<iostream>
using namespace std;


int n, k;
int a[21], b[21];



int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i ++){
			cin >> a[i];
			b[i] = a[i];
		}
		int i = k;
		while(a[i] == n - k + i && i > 0)
			i--;
		if(i == 0)
			cout << k << endl;
		else {
			a[i] ++;
			for(int j = i + 1; j <= k; j++)
				a[j] = a[j- 1] + 1;
				int count = 0;
				
				for(int i = 1; i <= k; i++){
					for(int j = 1; j <= k; j++)
						if(a[i] == b[j]){
							count ++;
							break;
						}
				}
				cout << k - count << endl;
		}
	}
}
