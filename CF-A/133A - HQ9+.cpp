#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	string program;
	cin >> program;

	unsigned int i = 0;
	for(; i < program.size(); i++){
		if(program[i] == 'H' || program[i] == 'Q' || program[i] == '9') break;
	}

	if(i < program.size()) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}