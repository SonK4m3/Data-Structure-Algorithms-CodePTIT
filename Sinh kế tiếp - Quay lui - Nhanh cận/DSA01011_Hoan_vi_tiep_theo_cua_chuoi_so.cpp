#include<iostream>
using namespace std;

string s;
int n;
bool ok;

void swap(string &str, int i, int j){
	char tmp = str[i];
	str[i] = str[j];
	str[j] = tmp;
}

void Try(){
	int j = n - 1;
	while(j > 0 && (s[j] - '0' >= s[j + 1] - '0'))
		j--;
	if(j > 0){
		int  k = n;
		while(s[j] - '0' >= s[k] - '0')
			k--;
		swap(s, j, k);
		int r = j + 1, l = n - 1;
		while(r <= l){
			swap(s, r, l);
			r++; l--;
		}
	}else{
		ok = true;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int index;
		ok = false;
		cin >> index >> s;
		n = s.size();
		Try();
		cout << index << " ";
		if(ok == false)
			cout << s << endl;
		else 
			cout << "BIGGEST" << endl;
	}
}
