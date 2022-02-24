#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int i = n - 1;
		while(s[i] == '0'){
			s[i] = '1';
			i --;
		}
		if(i > 0)
			s[i] = '0';
		cout << s << endl;
	}
}
