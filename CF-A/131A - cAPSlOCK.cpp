#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	string str;
	bool changeCase = true;

	cin >> str;

	for(unsigned int i = 1; i < str.size(); i++){
		if(str[i] >= 'a'){
			changeCase = false;
			break;
		}
	}

	if(changeCase){
		for(unsigned int i = 0; i < str.size(); i++){
			if(str[i] < 'a') cout << (char)(str[i] - ('A' - 'a'));
			else cout << (char)(str[i] - ('a' - 'A'));
		}
		cout << endl;
	}
	else cout << str << endl;

	return 0;
}