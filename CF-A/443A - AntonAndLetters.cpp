#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; 
	getline(cin, s);

	set <char> l;

	for(unsigned int i = 1; i < s.size() - 1; i += 3){
		l.insert(s[i]);
	}

	cout << l.size() << endl;

	return 0;
}