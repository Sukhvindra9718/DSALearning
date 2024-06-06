#include <bits/stdc++.h>
using namespace std;


string addBinary(string a, string b) {
        string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i--] - '0';    //ASCII value of (1 => 49) minus ASCII value of (0 => 48)
            if(j >= 0) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;
            res += to_string(sum % 2);
        }
        if(carry) res += to_string(carry);
        if(res == "0") return res;
        reverse(res.begin(), res.end());
        return res;
    }
int main() {
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<addBinary(a,b)<<endl;; 
    }
    
    return 0;
}
