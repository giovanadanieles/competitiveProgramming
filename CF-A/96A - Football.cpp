#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	string conf;
	cin >> conf;

	if(conf.find("1111111") != string::npos ||
	   conf.find("0000000") != string::npos) cout << "YES" << endl;
	else cout << "NO" << endl; 

	return 0;
}