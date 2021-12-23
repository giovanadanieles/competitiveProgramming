#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	string s;
	cin >> s;

	for(unsigned int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);

		if(s[i] != 'a' &&
		   s[i] != 'e' &&
		   s[i] != 'i' &&
		   s[i] != 'o' &&
		   s[i] != 'u' &&
		   s[i] != 'y') cout << "." << s[i];
	}
	cout << endl;

	return 0;
}