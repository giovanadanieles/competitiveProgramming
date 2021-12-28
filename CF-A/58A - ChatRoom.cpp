#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int status = 0;
	string s;
	cin >> s;

	for(unsigned int i = 0; i < s.size(); i++){
		switch(status){
			case 0:
				if(s[i] == 'h') status = 1;
			break;
			case 1:
				if(s[i] == 'e') status = 2;
			break;
			case 2:
				if(s[i] == 'l') status = 3;
			break;
			case 3:
				if(s[i] == 'l') status = 4;
			break;
			case 4:
				if(s[i] == 'o') status = 5;
			break;
		}

		if(status == 5) break; 
	}

	if(status == 5) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}