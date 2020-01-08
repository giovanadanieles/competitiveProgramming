#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	unsigned int solve = 0;

	for(unsigned int i = 0; i < s2.size() && solve < s1.size(); i++){
		if(s2[i] == s1[solve]) solve++;
	}

	cout << solve + 1 << endl;

	return 0;
}
