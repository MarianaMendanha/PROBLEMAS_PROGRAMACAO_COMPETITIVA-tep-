//Little Elephant and Bits CodeForces - 258A

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
    
    string en,nen;

    cin >> en;

    auto fst0=en.find('0');
    if(fst0 != (string::npos)){}
    if(fst0==-1){cout<<en.substr(1)<<endl;}
    else{
        nen.append(en.begin()+fst0+1,en.end());
        //cout<<nen<<endl;
        nen.insert(0,en,0,fst0);
        cout<<nen<<endl;
    }
    
    
return 0;
}