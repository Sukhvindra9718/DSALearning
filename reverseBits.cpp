#include <bits/stdc++.h>
using namespace std;


uint32_t reverseBits(uint32_t n) {
    long long result = 0;
    for(int i = 0;i<32;i++){
        long long leastSignificantBit = n&1;
     
        // Right Shift || Divide by 2
        n = n >> 1;
        
        // Left Shift || Multiply by 2
        result = result << 1; 

        // Add leastSignificantBit in result
        result = result | leastSignificantBit; 
    }
   
    return result;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        uint32_t n;
        cin>>n;
        cout<<reverseBits(n)<<endl;; 
    }
    
    return 0;
}
