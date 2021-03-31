//Cells Not Under Attack CodeForces - 701B

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>
#include <algorithm>
#include <bitset>
#include <vector>
#include <string>
#include <sstream>
#include <set>

using namespace std;

int main(){

    long long n,m,a,b;
	cin>>n>>m;
	set<int>sa;
	set<int>sb;

	while(m--){
	    cin>>a>>b;
	    sa.insert(a);
        sb.insert(b);
	    cout<<( n-(sa.size()) )*( n-(sb.size()) )<<" ";
	}

return 0;
}