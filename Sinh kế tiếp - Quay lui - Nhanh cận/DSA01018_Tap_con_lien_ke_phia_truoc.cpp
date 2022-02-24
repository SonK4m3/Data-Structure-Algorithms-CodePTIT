#include<iostream>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int arr[k + 1] = {0};
		for(int i = 1; i <= k; i++)
			cin >> arr[i];
		
		int index = k;
		while(arr[index] == arr[index - 1] + 1)
			index --;
		if(index == 0){
			for(int i = k; i >= 1; i--){
				cout << n - i + 1 << " ";
			}
		}else {
			arr[index] --;
			for(int i = index + 1; i <= k; i ++)
				arr[i] = n - k + i;
			for(int i = 1; i <= k; i++)
				cout << arr[i] <<" ";
		}
		cout << endl;
	}
}
