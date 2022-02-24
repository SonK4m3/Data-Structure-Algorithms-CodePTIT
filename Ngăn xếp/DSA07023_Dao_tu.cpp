#include<iostream>
#include<stack>
#include<sstream>
using namespace std;

int  main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		char k;
		cin >> k;
		getline(cin, str);
		str = k + str;
		
		stack<string> st;
		
		stringstream arr(str);
		while(!arr.eof()){
			string tmp;
			arr >> tmp;
			st.push(tmp);
		}
		while(!st.empty()){
			cout << st.top() <<" ";
			st.pop();
		}
		cout << endl;
	}
	
	return 0;
}
