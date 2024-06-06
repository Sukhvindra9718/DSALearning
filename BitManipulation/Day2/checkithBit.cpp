#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,ith;
        cin>>n>>ith;

        // if(((1<<ith) & n) != 0){
        //     cout<<true<<endl;
        // }else{
        //     cout<<false<<endl;
        // }

        if(((n >> ith) & 1) == 0){
            cout<<false<<endl;
        }else{
            cout<<true<<endl;
        }

    }
    
    return 0;
}
