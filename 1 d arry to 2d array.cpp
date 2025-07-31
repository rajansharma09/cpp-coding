#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    // Check if the size of the original array matches m * n
    if (original.size() != m * n) {
        return {}; // Return an empty 2D array
    }

    // Construct the 2D array
    vector<vector<int>> result(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            result[i][j] = original[i * n + j];
        }
    }

    return result;
}

int main() {
    vector<int> original = {1, 2, 3, 4};
    int m = 2, n = 2;

    vector<vector<int>> result = construct2DArray(original, m, n);

    // Print the result
    if (result.empty()) {
        cout << "[]"; // Empty array
    } else {
        for (const auto& row : result) {
            for (int num : row) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
