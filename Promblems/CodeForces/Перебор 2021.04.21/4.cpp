#include <iostream>
#include <vector>

int main() {
    using namespace std;
    unsigned short int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = INT_MAX;
    int minIndex = -1;
    for (int i = 1; i < n - 1; i++) {
        if (a[i + 1] - a[i - 1] < min) {
            min = a[i + 1] - a[i - 1];
            minIndex = i;
        }
    }

    int max = 0;
    for (int i = 0; i < n - 1; i++) {
        int m;
        if (i == minIndex - 1) {
            m = a[i + 2] - a[i];
        } else {
            m = a[i + 1] - a[i];
        }
        if (m > max) {
            max = m;
        }
    }

    cout << max << endl;
    return 0;
}
