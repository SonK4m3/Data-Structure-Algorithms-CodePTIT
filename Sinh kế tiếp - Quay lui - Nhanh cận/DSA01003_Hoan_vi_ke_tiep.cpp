#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;  
}

void Try(int arr[], int n){
	int j = n - 1;
	while(j > 0 && arr[j] > arr[j + 1])
		j--;
	if(j > 0){
		int k = n;
		while(arr[j] > arr[k])
			k--;
		swap(arr[k], arr[j]);
		int r = j + 1, l = n;
		while(r <= l){
			swap(arr[r], arr[l]);
			r++; l--;
		}
	}else{
		for(int i = 1; i<= n; i++)
			arr[i] = i;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n + 1];
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		Try(arr, n);
		for(int i = 1; i <= n; i++)
			cout << arr[i] <<" ";
		cout << endl;
	}
	
	return 0;
}
