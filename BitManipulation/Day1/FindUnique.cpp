#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string input;
        cin >> input; // Read the array input as a string
        
        // Remove the square brackets
        input = input.substr(1, input.size() - 2);
        
        // Convert the string to a stringstream
        stringstream ss(input);
        string number;
        vector<int> nums;
        
        // Extract numbers separated by commas
        while (getline(ss, number, ',')) {
            nums.push_back(stoi(number));
        }

        // XOR operation
        int res = nums[0];
        int size = nums.size();

        for (int i = 1; i < size; i++) {
            res = res ^ nums[i];
        }
        
        cout << res << endl;
        
    }
    
    return 0;
}
