#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define end string::npos

int main() {
    string s(120, '7');
    auto p1 = s.find("88777");
    auto p2 = s.find("7");
    while (p1 != end || p2 != end) {
        if (p1 != end) {
            s.replace(p1, 5, "8");
        } else {
            s.replace(p2, 1, "8");
        }
        p1 = s.find("88777");
        p2 = s.find("7");
    }
    cout << s;
    return 0;
}

