#include <bits/stdc++.h>
using namespace std;

int main(int argc, char*const argv[]){
	int letters, dif;
	unordered_set<char> used;
	string ans;

	cin >> letters >> dif;

	for(int i = 0, j = 'a'; i < dif; i++, j++){
		ans+= j;
	}

	for(int i = 0; i < letters - dif; i++){
		ans += ans[i];
	}

	cout << ans << endl;

	return 0;
}