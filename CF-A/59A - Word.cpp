#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;
	int low = 0, up = 0;

	for(unsigned int i = 0; i < s.size(); i++){
		if(s[i] >= 'a') low++;
		else up++;
	}

	if(low >= up){
		for(unsigned int i = 0; i < s.size(); i++){
			if(s[i] < 'a'){
				s[i] += 32;
				cout << s[i];
			}
			else cout << s[i];
		}
		cout << endl;
	}
	else {
		for(unsigned int i = 0; i < s.size(); i++){
			if(s[i] >= 'a'){
				s[i] -= 32;
				cout << s[i];
			}
			else cout << s[i];
		}
		cout << endl;
	}

	return 0;
}