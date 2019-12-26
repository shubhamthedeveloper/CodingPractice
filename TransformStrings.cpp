https://practice.geeksforgeeks.org/problems/transform-string/0


#include <iostream>
#include <string>
#include<bits/stdc++.h> 
using namespace std;


int transform(string str1, string str2){
    int n = str1.length();
    int m = str2.length();
    //cout << n << m;
    if(n!=m)
    return -1;
    
    int count[256];
    memset(count,0,sizeof(count));
    for(int i=0;i<m;i++){
        count[str2[i]]++;
    }
    
    for(int j=0;j<n;j++){
        count[str1[j]]--;
    }
    
    for(int i=0;i<256;i++)
        if(count[i])
        return -1;
    
    int res=0;
    for(int i=n-1,j=m-1;i>=0;){
        while(i>=0 && str1[i] != str2[j]){
            i--;
            res++;
        }
        
        if(i>=0){
            i--;
            j--;
        }
    }
    return res;
}



int main() {
    int t;
    string str1,str2;
    cin >>t;
    while(t--){
        cin>>str1 >> str2;
        cout << transform(str1,str2) << endl;
    }
	//code
	return 0;
}