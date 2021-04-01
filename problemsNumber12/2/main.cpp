#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define end string::npos
int main() {
    string s(2019,'1');
    s+=string(2119,'3');
    auto p1=s.find("11");
    auto p2=s.find("22");
    auto p3=s.find("33");
    while(p1!=end){
        s.replace(p1,2,"2");
        p2=s.find("22");
        if(p2!=end)
            s.replace(p2,2,"3");
        p3=s.find("33");
        if(p3!=end)
            s.replace(p3,2,"1");
        p1=s.find("11");
    }
    cout<<s;
    return 0;
}

