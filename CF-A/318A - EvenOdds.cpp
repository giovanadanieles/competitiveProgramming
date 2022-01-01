#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char* const argv[]){
	ll total, position;

	cin >> total >> position;

	if(position > (total + 1) / 2) cout << (position - (total + 1) / 2) * 2 << endl;
	else cout << position * 2 - 1 << endl; 

	return 0;
}