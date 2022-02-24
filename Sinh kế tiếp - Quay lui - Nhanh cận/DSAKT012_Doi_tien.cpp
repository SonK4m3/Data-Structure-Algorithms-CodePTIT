#include<iostream>
using namespace std;
long long a[31], s, sum;
int n, check[31], ok = 0;

void Try(int i, int last){
	if(sum == s && i == last){
		ok = 1;
		return;
	}
	if(i == last && sum != s)
		return;
	for(int j = 1; j <= n; j++){
		if(j > check[i - 1]){
			sum += a[j];
			check[i] = j;
			if(sum <= s)
				Try(i + 1, last);
			sum -= a[j];
			check[i] = 0;
		}
	}
}

int main(){
		cin >> n >> s;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		ok = 0;
		int last;
		for(last = 1; last <= n; last++){
			sum = 0;
			Try(0, last);
			if(ok == 1)
				break;
		}
		if(ok == 1) cout << last << endl;
		else cout << -1 << endl;
	return 0;
}
