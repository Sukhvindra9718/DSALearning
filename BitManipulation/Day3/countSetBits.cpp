#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n){
    int count = 0;

    while(n > 1){
        if(n&1 == 1) count +=1;
        n = n >> 1;  // Left Shift
        // cout<<n;
    }
    if(n == 1) count += 1;

    return count;
}
int countSetBits2(int n){
    int count = 0;

    while(n != 0){
        n = n & (n-1);
        count += 1;
    }

    return count;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<countSetBits2(n)<<endl;
    }
    
    return 0;
}




