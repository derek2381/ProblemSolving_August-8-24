// problem link
// https://www.codechef.com/problems/FLOW017


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if((a >= b && c >= a) ||(a >= c && b >= a) ){
	        cout << a << endl;
	    }else if((b >= a && c >= b) || (b >= c && a >= b)){
	        cout << b << endl;
	    }else if((c >= a && b >= c) || (c >= b && a >= c)){
	        cout << c << endl;
	    }
	}
	
	return 0;
}
