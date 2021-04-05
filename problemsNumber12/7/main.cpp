#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
#define end string::npos

int main() {
    string s(2019, '1');
    s += string(2019, '3');
    auto p1 = s.find("111");
    auto p2 = s.find("222");
    auto p3 = s.find("333");
    while (p1 != end) {
        s.replace(p1, 3, "2");
        p2 = s.find("222");
        if (p2 != end) {
            s.replace(p2, 3, "3");
        }
        p3 = s.find("333");
        if (p3 != end) {
            s.replace(p3, 3, "1");
        }
        p1 = s.find("111");
    }
    cout << s;
    return 0;
}

