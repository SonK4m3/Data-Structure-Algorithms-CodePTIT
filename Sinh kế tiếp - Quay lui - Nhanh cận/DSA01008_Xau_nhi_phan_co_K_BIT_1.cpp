#include<iostream>
using namespace std;

int a[20], n, k;

void print() {
    for(int i = 1; i <= n; i++) 
		cout << a[i];
    cout << endl;
}
void Try(int i) { 
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        if(i == n){
        	int cnt = 0;
        	for(int l = 1; l <= n; l++)
        		if(a[l] == 1) 
        			cnt ++;
        	if(cnt == k){
        		print();
			}
		}
        else Try(i + 1);
    }
}
main() {
	int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        Try(1);
    }
    return 0;
}
