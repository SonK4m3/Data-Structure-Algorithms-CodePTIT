#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >> str;
		stack<int> s;
		for(int i = 0; i < str.size(); i ++){
			if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
				int a = s.top(); s.pop();
				int b = s.top(); s.pop();
				int tmp = 0;
				if(str[i] == '+')
					tmp = b + a;
				else if(str[i] == '-')
					tmp = b - a;
				else if(str[i] == '*')
					tmp = b * a;
				else
					tmp = b / a;
				s.push(tmp); 
			}
			else
				s.push(str[i] - '0');
				
			
		}
		cout << s.top() << endl;
	}
}

