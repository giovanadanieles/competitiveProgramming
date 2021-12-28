#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int i, j;
	string original, translated;

	cin >> original >> translated;

	if(original.size() != translated.size()) cout << "NO" << endl;
	else{
		for(i = 0, j = original.size() - 1; i < (int)original.size() && j >= 0; i++, j--){
			if(original[i] != translated[j]) break;
		}

		if(j == -1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}