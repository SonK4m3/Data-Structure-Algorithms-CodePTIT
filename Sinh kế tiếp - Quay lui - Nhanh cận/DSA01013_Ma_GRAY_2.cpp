#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res = "";
		res += s[0];
		for(int i = 1; i < s.size(); i++){
			if(s[i] == res[i - 1])
				res += "0";
			else 
				res += "1";
		}
		cout << res << endl;
	}
	
}
