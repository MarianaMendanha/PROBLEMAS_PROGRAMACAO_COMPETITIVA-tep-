//Takoyaki AtCoder - abc176_a 

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
    
    int n,x,t;

    cin >> n >> x >> t;
    
    if (n%x == 0){
        cout << n/x * t << endl;
    }else{
        cout << (n/x + 1) * t << endl;
    }


    return 0;
}