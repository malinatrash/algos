#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(int hours, int minutes) {
    std::string hoursStr = std::to_string(hours);
    std::string minutesStr = std::to_string(minutes);
    
    std::reverse(minutesStr.begin(), minutesStr.end());
    
    return minutesStr == hoursStr;
}

int main() {
    using namespace std;

		string time;
    cin >> time;
    
    int hours = stoi(time.substr(0, 2));
    int minutes = stoi(time.substr(3, 2));

		int min = 0;
    
		bool ispalindrom = isPalindrome(hours, minutes);
		while (!ispalindrom) {
			minutes++;
			min++;
			if (minutes == 60) {
				hours++;
				minutes = 0;
				if (hours == 24) {
					hours = 0;
				}
			}
			if (hours > 9) {
				ispalindrom = isPalindrome(hours, minutes);
			} else {
				if (minutes > 9) {
				ispalindrom = isPalindrome(hours, minutes / 10);
				} else {
				ispalindrom = isPalindrome(hours, minutes);
				}
			}
			cout << hours << ":" << minutes << endl;
		}
		cout << min << endl;
    return 0;
}
