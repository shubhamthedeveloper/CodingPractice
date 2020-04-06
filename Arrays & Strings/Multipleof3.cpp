//https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-3/0

#include <iostream>
#include <string>
using namespace std;

int main() {
     long long int t;
    cin >> t;
    while(t--){
        string s;
        cin >>s;
        long int odd=0,even=0,check =-1;
        long long int len = s.length();
        for(long long int i=len-1;i>=0;i--){
            if(check==-1){
                if(s[i] == '1') odd++;
            }
            else {
                if(s[i]=='1')even++;
            }
            check = check*-1;
        }
        if(abs(odd-even)%3 == 0)
        cout << 1 << endl;
        else cout << 0 << endl;
    }
	//code
	return 0;
}