#include<iostream>
#include<stack>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		
		long res[n];
		stack<long> s;
		for(int i = n - 1; i >= 0; i--){
			while(!s.empty()){
				if(arr[i] >= s.top())
					s.pop();
				else
					break;
			}
			res[i] = (s.empty()) ? -1 : s.top();
			
			s.push(arr[i]);
		}
		for(int i = 0; i < n; i++)
			cout << res[i] <<" ";
		cout << endl;
	}
}
