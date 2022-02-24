#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >> str;
		stack<char> s;
		int res = 0;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '(')
				s.push(str[i]);
			else{
				if(!s.empty()){
					res += 2;
					s.pop();
				}
			}
		}
		cout << res << endl;
	}
}
