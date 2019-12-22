//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
    int arr[1000000];
    int t,n;
    cin >>t;
    while(t--){
    cin >>n;
    for(int i=0;i<n;i++)
    cin >> arr[i];
    int localmax = arr[0];
    int globalmax = arr[0];
    for(int i=1;i<n;i++){
        localmax = max(arr[i],localmax+arr[i]);
        globalmax = max(localmax, globalmax);
    }
    cout << globalmax<<endl;
    }
    
	//code
	return 0;
}