// problem link
// https://www.codechef.com/problems/SAMESAME

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int s = 0;
	    int e ;
	    int n;
	    cin >> n >> e;
	    string str1, str2;
	    cin >> str1 >> str2;

	    e = str2.length();

	    int res = 0, val = 0;

	    for(int i = 0;i < e;i++){
	        if(str1[i] != str2[i]){
	            val++;
	        }
	    }

	    res = val;

	    for(int i = 1;i <= n-e;i++){
	        val = 0;
	        for(int j = 0;j < e;j++){
	            if(str1[j+i] != str2[j]){
	                val++;
	            }
	        }

	        res = min(res, val);
	    }

	    cout << res << endl;
	}
	return 0;
}
