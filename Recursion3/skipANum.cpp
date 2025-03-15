// Skip a Number
#include<iostream>
#include<vector>
using namespace std;
void removeNumber(vector<int> ans, vector<int> original, int idx) {
    // Base Case
    if (idx == original.size()) {
        // Print the modified array
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        return;
    }
    int num = original[idx];
    if (num == 1) 
        removeNumber(ans, original, idx + 1);
    else {
        ans.push_back(num);
        removeNumber(ans, original, idx + 1);
    }
}
int main() {
    vector<int> arr = {1, 5, 4, 1, 7, 3, 2};
    removeNumber({}, arr, 0);
    return 0;
}
