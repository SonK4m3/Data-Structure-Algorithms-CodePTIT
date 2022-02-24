#include<iostream>
using namespace std;

void in(int arr[], int n){
	int d = 0;
	int arr1[n];
	arr1[0] = arr[0];
	for(int i = 1 ; i < n; i ++){
		arr1[i] = arr1[i - 1] + arr[i];
	}
	int arr2[n];
	arr2[n - 1] = arr[n - 1];
	for(int j = n - 2 ; j >= 0; j --){
		arr2[j] = arr2[j + 1] + arr[j];
	}
	for(int i = 1 ; i < n - 1; i++){
		if(arr1[i] == arr2[i]){
			cout << i + 1 <<" ";
			d = 1;
			break;
		}
	}
	if(d == 0)	cout<<-1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i  < n; i++)
			cin >> arr[i];
		in(arr, n);
		cout << endl;
	}
}

