#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> st;
	string s;
	while(cin >> s){
		if(s == "push"){
			int x;
			cin >> x;
			st.push(x);
		}
		else if(s == "show"){
			if(st.empty())
				cout << "empty\n";
			else{
				stack<int>tmp = st;
				vector<int> v;
				while(!tmp.empty()){
					v.push_back(tmp.top());
					tmp.pop();
				}
				for(int i = v.size() - 1; i >= 0; i--)
					cout << v[i] << " ";
				cout << endl;
			}
		}
		else if(s == "pop"){
			st.pop();
		}
	}
}
