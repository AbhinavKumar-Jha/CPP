#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& v) {
    int n = v.size();
    int i = 0, j = n - 1;

    // Use two-pointer approach to sort negatives and positives
    while (i < j) {
        if (v[i] < 0) {
            i++; // Move i forward if it's a negative number
        } else if (v[j] >= 0) {
            j--; // Move j backward if it's a positive number
        } else {
            // Swap if v[i] is positive and v[j] is negative
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}

int main() {
    vector<int> v = {-1, 2, -3, 4, -5, 6, -7, 8};

    cout << "Original array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }
    cout << endl;

    sort01(v);

    cout << "Sorted array: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "  ";
    }

    return 0;
}

