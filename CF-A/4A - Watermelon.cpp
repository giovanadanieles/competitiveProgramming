#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int kilos;
	cin >> kilos;

	if(kilos == 2) cout << "NO\n";
	else kilos % 2 == 0? cout << "YES\n" : cout << "NO\n";

	return 0;
}