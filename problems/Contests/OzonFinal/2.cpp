#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        double p;
        cin >> p;
        p *= 0.01;
        double err = 0;
        for (int i = 0; i < n; i++) {
            double a;
            cin >> a;
            double res = a * p;
            res = round(res * 100) / 100;
            err += abs(res - int(res));
        }
        cout << fixed << setprecision(2) << err << endl;
    }

    return 0;
}
