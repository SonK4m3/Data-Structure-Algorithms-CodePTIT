#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		
		int Max = 0;
		int aMax = 0;
		int i = 0;
		while(i < n){
			int j = 0;
			int cnt = 0;
			while(arr[i + j] == arr[i] && i + j < n){
				j ++;
				cnt ++;
			}
			if(Max < cnt){
				Max = cnt;
				aMax = arr[i];
			}
//			cout << arr[i] <<" " << cnt << endl;
			i = i + j;
		}
		if(Max > n/2)
			cout << aMax << endl;
		else 
			cout << "NO\n";
	}
}
