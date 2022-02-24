#include<bits/stdc++.h> 
using namespace std; 
typedef struct Point{
	int x;
	int xuathien;
}point;

int main(){ 
	int t; 
	cin>>t; 
	while(t--){ 
		int n; 
		cin>>n; 
		int a[n]; 
		for(int i=0;i<n;i++){ 
			cin>>a[i]; 
		} 
		int index = 0;
		point arr[n];
		for(int i = 0; i < n; i++){
			if(a[i] != -1){
				arr[index].x = a[i];
				arr[index].xuathien = 1;
				for(int j = i + 1; j < n; j++){
					if(a[j] == a[i]){
						arr[index].xuathien ++;
						a[j] = -1;
					}
				}
			index ++;
			}
		}
		for(int i = 0; i < index - 1; i++){
			for(int j = i + 1; j < index; j++){
				if((arr[i].xuathien < arr[j].xuathien) || (arr[i].xuathien == arr[j].xuathien && arr[i].x > arr[j].x) ){
					point temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for(int i = 0; i < index; i++){
			for(int j = 0; j < arr[i].xuathien; j++){
				cout << arr[i].x <<" ";
			}
		}
		cout<<endl; 
	} 
}

