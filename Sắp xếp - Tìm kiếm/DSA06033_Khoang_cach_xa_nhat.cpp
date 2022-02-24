#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n)
{
 
        int rightMax[n];
        rightMax[n-1]= arr[n-1];
        for(int i = n-2; i>=0; i--)
            rightMax[i] = max(rightMax[i+1] , arr[i]);
         
 
 
         
        int maxDist = INT_MIN;
        int i = 0, j = 0;
        while(i<n && j<n)
        {
            if(rightMax[j] > arr[i])
            {
                maxDist = max( maxDist, j-i );
                j++;
            }
            else
                i++;
        }
         
        return maxDist;
         
         
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		cout << maxIndexDiff(arr, n)<< endl;
	}
}

