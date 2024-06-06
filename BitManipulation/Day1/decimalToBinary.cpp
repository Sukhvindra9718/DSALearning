#include <bits/stdc++.h>
using namespace std;


string decimalToBinary(int decimalNumber){
    string res;

    while(decimalNumber != 0){
        if(decimalNumber&1 == 1){
            res += '1';
        }else{
            res += '0';
        }
        decimalNumber /= 2;
    }
    reverse(res.begin(),res.end());
    
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<decimalToBinary(n)<<endl;; 
    }
    
    return 0;
}
