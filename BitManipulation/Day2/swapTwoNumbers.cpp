#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        cout<<"Before Swap a : "<<a<<" b : "<<b<<endl;

        a = a^b;
        b = a^b;
        a = a^b;
        cout<<"After Swap a : "<<a<<" b : "<<b<<endl;
    }
    
    return 0;
}
