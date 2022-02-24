#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void Sort_odd_even(int n, long *arr){
	vector<long> even, odd;
	for(int i = 0; i < n; i++){
		if(i % 2 == 0)
			even.push_back(arr[i]);
		else
			odd.push_back(arr[i]);
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	
	int k = 0, h = odd.size() - 1;
	for(int i = 0; i < n; i ++){
		if(i % 2 == 0){
			cout << even[k] <<" ";
			k ++;
		}
		else{
			cout << odd[h] << " ";
			h --;
		}
	}
}

int main(){
	int n;
	cin >> n;
	long arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	Sort_odd_even(n, arr);
	
	return 0;
}

