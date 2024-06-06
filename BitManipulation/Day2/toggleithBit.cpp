#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,ith;
        cin>>n>>ith;

        

        cout<<((1 << ith) ^ n)<<endl;
    }
    
    return 0;
}




