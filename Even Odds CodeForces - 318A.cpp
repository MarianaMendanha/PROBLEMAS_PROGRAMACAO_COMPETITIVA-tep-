//Even Odds CodeForces - 318A

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
#include <stdio.h>

using namespace std;

int main(){

    long long n, k;
    cin >> n >> k;

    if(k<=((n+1)/2)){cout << ((k*2)-1) <<endl;}
    else{cout << (k-(n+1)/2)*2 <<endl;}

return 0;
}