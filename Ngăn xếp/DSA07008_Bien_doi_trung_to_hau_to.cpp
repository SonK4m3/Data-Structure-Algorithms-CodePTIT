#include<iostream>
#include<stack>
using namespace std;

int check(char c){
	if(c == '^') return 5;
	if(c == '*' || c == '/') return 4;
	if(c == '+' || c == '-') return 3;
	return 2;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		stack<char> st;
		string tmp = "";
		for(int i = 0; i < str.size(); i++){
			if(str[i] >= 'A' && str[i] <= 'Z')
				tmp += str[i];
			else if(str[i] >= 'a' && str[i] <= 'z')
				tmp += str[i];
			else if(str[i] >= '0' && str[i] <= '9')
				tmp += str[i];
			else if(str[i] == '(')
				st.push(str[i]);
			else if(str[i] == ')'){
				while(st.size() > 0 && st.top() != '(' ){
					tmp += st.top();
					st.pop();
				}
				st.pop();
			}
			else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
				while(st.size() > 0 && check(st.top()) >= check(str[i])){
					tmp += st.top();
					st.pop();
				}
				st.push(str[i]);
			}
		}
		
		while(st.size() > 0){
			if(st.top() != '(')
				tmp += st.top();
			st.pop();
		}
		cout << tmp << endl;
	}
}

