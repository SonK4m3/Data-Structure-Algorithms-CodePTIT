#include<iostream>
#include<stack>
using namespace std;

void Solution(string str){
	stack<string> s;
	
	// when str[i] is sign, take 2 element in top stack to calculate	
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
			string A = s.top(); s.pop();
			string B = s.top(); s.pop();
			string tmp =  '(' + B + str[i] + A + ')';
			s.push(tmp); 
		}
		else
			s.push(string(1, str[i]));
	}
	cout << s.top() << endl;	
}

int main(){
	int t;	// input test case
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		Solution(str); // solution function
	}
}

