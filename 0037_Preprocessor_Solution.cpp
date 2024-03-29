/* Enter your macros here */
#define INF 100000000
#define foreach(v, i) for(auto i=0; i<v.size(); i+=1)
#define toStr(a) #a
#define io(v) cin >>v
#define FUNCTION(a, b) void a(int& lhs, int& rhs) { if(rhs b lhs) lhs=rhs;}

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
