//Summation of Polynomials UVA - 10302

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

    long long x;
    long long ans;
    
    while(cin>>x){

        ans=1;
        ans=ans*x*(x+1)/2;
        ans=ans*x*(x+1)/2;
        cout<<ans<<endl;
    }
    
return 0;
}