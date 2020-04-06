//https://practice.geeksforgeeks.org/problems/majority-element/0

#include <iostream>
#include<set>
using namespace std;

int majority(int arr[], int n){
    int maxcount=0;
    int index=-1;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j])
            count++;
        }
        if(count > maxcount){
            maxcount = count;
            index = i;
        }
    }
    if(maxcount > n/2)
    return arr[index];
    else return -1;
}

int main() {
    int arr[1000000];
    int t,n;
    cin >>t;
    while(t--){
    cin >>n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cout << majority(arr,n) << endl;
    }
	//code
	return 0;
}