#include<iostream>
#include<stack>
using namespace std;

int check(string s){
	stack<char> v;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(' || s[i] == '[' || s[i] == '{')
			v.push(s[i]);
		else{
			if(!v.empty() && s[i] == ')' && v.top() == '(')
				v.pop();
			else if(!v.empty() && s[i] == ']' && v.top() == '[')
				v.pop();
			else if(!v.empty() && s[i] == '}' && v.top() == '{')
				v.pop();
			else
				return 0;
		}
	}
	return 1;
}

int main(){
	int t;	cin >> t;
	while(t--){
		string s;
		cin >> s;
		(check(s)) ? cout << "YES" : cout << "NO";
		cout << endl;
	}
}

