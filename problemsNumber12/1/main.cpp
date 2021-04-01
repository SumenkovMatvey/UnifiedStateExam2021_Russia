#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define end string::npos

int main(int argc, char *argv[])
{
 string s(45,'1');
 s+=string(45,'2');
 auto p1=s.find("111");
 auto p2=s.find("222");
 while(p1!=end){
  s.replace(p1,3,"2");
  p2=s.find("222");
  if(p2!=end)
    s.replace(p2,3,"1");
  p1=s.find("111");
  p2=s.find("222");
 }
 cout<<s;
}
