#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    
    // Step 1: Find the current maximum candies
    int maxCandies = *max_element(candies.begin(), candies.end());

    // Step 2: Check for each kid
    for (int i = 0; i < candies.size(); ++i) {
        if (candies[i] + extraCandies >= maxCandies) {
            result.push_back(true);
        } else {
            result.push_back(false);
        }
    }

    return result;
}

int main() {
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> result = kidsWithCandies(candies, extraCandies);

    // Print result
    for (bool val : result) {
        cout << (val ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
