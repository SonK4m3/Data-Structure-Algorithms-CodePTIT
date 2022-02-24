#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void print(int arr[], int n){
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	int arr[t];
	for(int i = 0; i < t; i++)
		cin >> arr[i];
	for(int i = 0; i < t - 1; i++){
		cout << "Buoc " << i + 1 << ": ";
		for(int j = i; j < t; j++){
			if(arr[i] > arr[j]){
				swap(arr[i], arr[j]);
			}
		}
		print(arr, t);
	}
	return 0;
}
