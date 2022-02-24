#include "bits/stdc++.h"
using namespace std;

bool snt(int n){
	if(n < 2)	return false;
	if( n == 2 || n == 3)	return true;
	if(n > 3){
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				return false;
			}
		}
		return true;
	}
}

void in(int n){
	bool last = false;
	if(n % 2 == 1){
		if(snt(n - 2))	{
			last = true;
			cout<< 2 << " " << n - 2;
		}
	}
	else{
		for(int i = 2; i <= n / 2; i ++){
			if(snt(i) == 1 && snt(n - i) == 1){
				last = true;
				cout << i <<" "<< n - i;
				break;
			}
		}
	}
	if(last == false)
		cout << -1;
}

int main()
{	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		in(n);
		cout << endl;
	}
	return 0;
}


