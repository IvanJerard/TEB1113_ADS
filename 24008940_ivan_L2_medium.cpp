#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    vector<int> arr;

   
    for (auto row : mat) {
        for (auto num : row) {
            arr.push_back(num);
        }
    } // all elements into one vector

    // Sort the vector
    sort(arr.begin(), arr.end());

    
    int mid = arr.size() / 2;
    cout << "Median = " << arr[mid] << endl;

    return 0;
}
