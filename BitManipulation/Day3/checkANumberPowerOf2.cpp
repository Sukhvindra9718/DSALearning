#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if((n&(n-1)) == 0)
        cout<<"Number is a power of 2"<<endl;
        else
        cout<<"Number is not a power of 2"<<endl;

    }
    
    return 0;
}




