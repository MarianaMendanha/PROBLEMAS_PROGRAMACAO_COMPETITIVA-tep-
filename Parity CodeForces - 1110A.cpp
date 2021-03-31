//Parity CodeForces - 1110A

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

using namespace std;


int main() {
	int n,k,a,ans=0;

    cin >>n>>k;
	for(int i=1; i<=k; i++){
        cin >>a;
		ans = (ans*n%2+a)%2;
	}
	cout<<(ans?"odd":"even")<<endl;
	return 0;
}