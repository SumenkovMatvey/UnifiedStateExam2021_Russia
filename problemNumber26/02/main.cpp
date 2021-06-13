#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream in("input.txt");
	int n;
	in>>n;
	vector<int>b;
	set<int>c;
	set<int>bin;
	for(int i=0;i<n;i++){
		int buf;
		in>>buf;
		bin.insert(buf);
		if(buf%2==0){
			b.push_back(buf);
		}
	}
	for(int i=0;i<(int)b.size();i++){
		for(int j=i;j<(int)b.size();j++){
			if(i==j){
				continue;
			}
			int h=(b[i]+b[j])/2;
			if(bin.count(h)){
				c.insert(h);
			}
		}
	}
	cout<<c.size()<<'\t'<<*--c.end();
	in.close();
	return 0;
}
