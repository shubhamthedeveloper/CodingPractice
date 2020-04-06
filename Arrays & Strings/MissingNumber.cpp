//https://practice.geeksforgeeks.org/problems/missing-number-in-array/0

#include <iostream>
using namespace std;


int find(int arr[],int num){
    int v1 = arr[0],v2 = 1;
    for(int i=1;i<num-1;i++){
        v1 = v1^arr[i];
    }
    for(int i=2;i<=num;i++){
        v2 = v2^i;
    }
    return(v1^v2);
}

int main() {
    int t,n;
    int arr[1000000];
    cin >>t;
    while(t--){
        cin >>n;
        for(int i=0;i<n-1;i++)
            cin >>arr[i];
         cout << find(arr,n) << endl;
    }
	//code
	return 0;
}