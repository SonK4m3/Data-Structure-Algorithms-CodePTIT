#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, m;
		cin >> n >> m;
		long a[n + m];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < m; i++)
			cin >> a[n + i];
		sort(a, a + n + m);
		for(int i = 0; i < n + m; i++)
			cout << a[i] <<" ";
		cout << endl;
	}
}
