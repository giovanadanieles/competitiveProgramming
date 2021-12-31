#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int strSize;
	char in;
	unordered_set<char> chars;

	cin >> strSize;

	for(int i = 0; i < strSize; i++){
		cin >> in;

		chars.insert(tolower(in));
	}

	if(chars.size() == 26) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}