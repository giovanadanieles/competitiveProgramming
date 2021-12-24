#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* const argv[]){
	int n, aux, ans;
	stack<int> prog, math, pe;

	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> aux;

		if(aux == 1) prog.push(i);
		else if(aux == 2) math.push(i);
		else pe.push(i); 
	}

	ans = min(prog.size(), math.size());
	ans = min(ans, (int)pe.size());

	cout << ans << endl;

	for(int i = 0; i < ans; i++){
		cout << prog.top() << " " << math.top() << " " << pe.top() << endl;

		prog.pop(), math.pop(), pe.pop();
	}

	return 0;
}