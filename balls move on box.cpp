#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        if (n == 0) return {}; // Handle edge case for empty string

        vector<int> left(n, 0), right(n, 0), res(n, 0);
        int count = (boxes[0] == '1' ? 1 : 0);

        // Debugging: Print initial state
        cout << "Initial boxes: " << boxes << endl;

        // Left-to-right pass
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] + count;
            count += (boxes[i] == '1' ? 1 : 0);
        }

        count = (boxes[n - 1] == '1' ? 1 : 0);

        // Right-to-left pass
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] + count;
            count += (boxes[i] == '1' ? 1 : 0);
        }

        // Combine results
        for (int i = 0; i < n; i++) {
            res[i] = left[i] + right[i];
        }

        // Debugging: Print intermediate arrays
        cout << "Left array: ";
        for (int val : left) cout << val << " ";
        cout << endl;

        cout << "Right array: ";
        for (int val : right) cout << val << " ";
        cout << endl;

        cout << "Result array: ";
        for (int val : res) cout << val << " ";
        cout << endl;

        return res;
    }
};

// Example usage
int main() {
    Solution sol;
    string boxes = "110";
    vector<int> result = sol.minOperations(boxes);

    cout << "Final Output: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
