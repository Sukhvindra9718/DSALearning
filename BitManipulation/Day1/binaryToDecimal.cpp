#include <bits/stdc++.h>
using namespace std;


int binaryToDecimal(string binaryString){
    int sum = 0;
    int p2 = 1;

    for(int i=binaryString.size()-1;i>=0;i--){
        if(binaryString[i] == '1'){
            sum = sum + p2;
        }
        p2 = p2*2;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<binaryToDecimal(str)<<endl;; 
    }
    
    return 0;
}
