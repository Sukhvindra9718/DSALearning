#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,ith;
        cin>>n>>ith;

        int mask = ~(1<<ith);

        cout<<(mask&n)<<endl;
    }
    
    return 0;
}




