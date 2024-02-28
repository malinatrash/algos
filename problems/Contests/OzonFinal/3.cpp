#include <iostream> 
#include <string> 
 
using namespace std; 
 
bool solve(const string& p) { 
    bool s = false; 
    bool c = false; 
    bool f = false; 
     
    for (char c : p) { 
        if (c == 'M') { 
            if (s) return false; 
            s = true; 
        } else if (c == 'R') { 
            if (!s || f) return false; 
        } else if (c == 'C') { 
            if (!s || c || f) return false; 
            c = true; 
        } else if (c == 'D') { 
            if (!s || f) return false; 
            f = true; 
        } 
    } 
     
    return f; 
} 
 
int main() { 
    int t; 
    cin >> t; 
    cin.ignore(); 
     
    for (int i = 0; i < t; ++i) { 
        string p; 
        getline(cin, p); 
         
        if (solve(p)) { 
            cout << "YES" << endl; 
        } else { 
            cout << "NO" << endl; 
        } 
    } 
     
    return 0; 
}