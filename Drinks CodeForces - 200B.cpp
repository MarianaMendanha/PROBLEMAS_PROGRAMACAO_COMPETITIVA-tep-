//Drinks CodeForces - 200B 

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

int main(){

    long double n,r = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		r+=a;
	}
    cout << fixed;
    cout << setprecision(12);
	cout<<(long double)r/n<<endl;

return 0;
}