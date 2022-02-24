#include<iostream>
#include<stack>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> v;
		v.push(-1);
		int res = 0;
		for(int i = 0; i < s.size(); i ++){
			if(s[i] == '(') v.push(i);
			else{
				v.pop();
				if(!v.empty())	res = max(res, i - v.top());
				else	v.push(i);
			}
		}
		cout << res << endl;
	}
	return 0;
}

