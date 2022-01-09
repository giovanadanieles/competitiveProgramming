#include <bits/stdc++.h>
using namespace std;
 
int main(int argc, char* const argv[]){
	int nGroups, aux, ans = 0;
	vector<int> groups(5, 0);
 
	cin >> nGroups;
 
	for(int i = 0; i < nGroups; i++){
		cin >> aux;
		groups[aux]++;
	}

	ans = groups[4];
 
 	while(groups[3] > 0){
 		if(groups[1] > 0) groups[1]--;

 		groups[3]--, ans++;
 	}


 	while(groups[2] > 1){
 		groups[2] -= 2, ans++; 
 	}

 	if(groups[2] == 1){
 		if(groups[1] > 1) groups[1] -= 2;
 		else if(groups[1] > 0) groups[1] -= 1;

 		groups[2]--, ans++;
 	}
	
 	
 	while(groups[1] > 0){
 		groups[1] -= 4;

 		ans++;
 	}
  
	cout << ans << endl;
 
	return 0;
}
