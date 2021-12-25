#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int x;
	cin >> x;

	x % 5 == 0 ? cout << x / 5 << endl : cout << x / 5 + 1 << endl;	

	return 0;
}