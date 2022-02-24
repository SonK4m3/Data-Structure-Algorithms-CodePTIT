#include<iostream>
#include<stack>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i = s.size() - 1; i >= 0; i--){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string tmp = '(' + a + s[i] + b + ')';
				st.push(tmp);	
			}else{
				string tmp = "";
				tmp = s[i];
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}
