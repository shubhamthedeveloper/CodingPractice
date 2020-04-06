//https://practice.geeksforgeeks.org/problems/key-pair/0

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

string findsum(int arr[],int n,int x){
    int start = arr[0];
    int last = n-1;
    sort(arr,arr+n);
    while(start < last){
        if(arr[start]+arr[last] == x)
        return "Yes";
        if(arr[start]+arr[last]>x)
            last--;
        else
            start++;
    }
    return "No";
    
}


int main() {
    int size,x,in;
    int arr[100000];
    cin >> in;
    
    for(int i=0;i<in;i++)
    {
        cin >> size;
    
        cin >> x;
    
        for(int i=0;i<size;i++){
            cin >>arr[i];
    }
   
     cout <<findsum(arr,size,x) << endl;
    }
	//code
	return 0;
}
