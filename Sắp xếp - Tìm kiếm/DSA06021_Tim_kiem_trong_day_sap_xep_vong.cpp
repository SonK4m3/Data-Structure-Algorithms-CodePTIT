#include<iostream>
using namespace std;

long SearchCircle(long arr[], long i, long j, long k){
	if(i > j)
		return -1;
		
	long m = (i + j) / 2;
	
	if(arr[m] == k)
		return m;
	if(arr[i] <= arr[m]){
		if(k >= arr[i] && k <= arr[m])
			return SearchCircle(arr, i, m - 1, k);
		return SearchCircle(arr, m + 1, j, k);
	}
	else{
		if(k >= arr[m] && k <= arr[j])
			return SearchCircle(arr, m + 1, j, k);
		return SearchCircle(arr, i, m - 1, k);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long n, k;
		cin >> n >> k;
		long arr[n];
		for(int i = 0; i< n; i++)
			cin >> arr[i];
		
		cout << SearchCircle(arr, 0, n, k) + 1<< endl;
		
	}	
	return 0;
}
