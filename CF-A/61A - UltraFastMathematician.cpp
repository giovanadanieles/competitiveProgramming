#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	string first, sec;
	cin >> first >> sec;

	for(unsigned int i = 0; i < first.size(); i++){
		if(first[i] == sec[i]) cout << "0";
		else cout << "1";
	}
	cout << endl;

	return 0;
}