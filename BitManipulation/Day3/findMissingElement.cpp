#include <bits/stdc++.h>
using namespace std;

int findMissingElement(const std::vector<int>& nums) {
    int ans = nums.size(); // n
    for (size_t ind = 0; ind < nums.size(); ++ind) {
        ans = ans ^ ind ^ nums[ind];
    }
    return ans;
}
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

    
        int missing = findMissingElement(nums);
        cout << "The missing element is: " << missing << endl;
    }
    
    return 0;
}




