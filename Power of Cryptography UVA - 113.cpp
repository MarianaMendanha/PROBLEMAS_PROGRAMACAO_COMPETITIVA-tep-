//Power of Cryptography UVA - 113

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

    int n;
    long double p;

    //cin >> n >>p;
    //k=pow(p,(long double)1/n);
    //cout << k << " " << (long double)1/n <<endl;

    /*for(i = 1; i<=p; i++){
        tst = pow(i,n) ;
        if(tst == p){break;}
        cout<<i<<" "<<pow(i,n)<<" "<< p <<endl;
    }
    cout << i <<endl;*/

    while(cin >> n >> p){
        cout << setprecision(0) << fixed << pow(p, (1.0L/n)) << endl;
    }
	
return 0;
}