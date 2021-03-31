//Sum of Round Numbers CodeForces - 1352A

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
    
    long long n,f;
    cin >> n;
    f=n;
    while(f--){
        int k,d=1;
        vector<int> c;
        
        cin >> k;
        while(1){
            if(k%10 != 0){c.push_back((k%10)*d);}
            k/=10;
            d*= 10;
            if(k==0){break;}
        }

        cout << c.size() << endl;
        for(int j=0; j<(c.size()); ++j){cout << c[j] << ' ';}
        cout <<endl;
 
    }
    return 0;
}