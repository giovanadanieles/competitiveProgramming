#include <bits/stdc++.h>
using namespace std;

const int N = 150;

int main(){
	string s; cin >> s;
	
	int aux[N], count = 0;
	memset(aux, -1, sizeof(aux));

	for(unsigned int i = 0; i < s.size(); i++){
		if(aux[s[i]] == -1){
			count++;
			aux[s[i]]++;
		}
	}	

	if(count % 2 == 0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;

	return 0;
}