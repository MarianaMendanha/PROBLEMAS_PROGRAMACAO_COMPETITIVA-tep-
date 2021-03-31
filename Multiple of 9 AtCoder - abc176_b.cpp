//Multiple of 9 AtCoder - abc176_b

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

    string n;
    cin >> n;
    long long ans = 0;

    for(auto t : n){ans += (t-'0');}
    
    if(ans % 9){cout << "No" <<endl;}
    else{cout << "Yes" <<endl;}
 

return 0;    
}