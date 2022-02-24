#include<iostream>
#include<queue>
using namespace std;

void print_even(string s){
	int n = s.size();
	string tmp = "";
	for(int i = 0; i < n; i++){
		tmp = s[i] + tmp;
		cout << s[i] << " ";
	}
	for(int i = 0; i < n; i++){
		cout << tmp[i] << " ";
	}
	cout << endl;
}
void print_odd(string s){
	int n = s.size();
	string tmp = "";
	for(int i = 0; i < n; i++){
		tmp = s[i] + tmp;
		cout << s[i] << " ";
	}
	for(int i = 1; i < n; i++){
		cout << tmp[i] << " ";
	}
	cout << endl;
}


void process(int n){
	queue<string> q;
	q.push("0");
	q.push("1");
	while(true){	
		string tmp = q.front();
		q.pop();
		if(n % 2 == 0 && tmp.size() == n/2)
			print_even(tmp);
		else if(n % 2 == 1 && tmp.size() == (n + 1)/2)
			print_odd(tmp); 
		if(tmp.size() > n)
			break;
		q.push(tmp + "0");
		q.push(tmp + "1");
	}
}

int main(){
	int n;
	cin >> n;
	process(n);
	return 0;
}
