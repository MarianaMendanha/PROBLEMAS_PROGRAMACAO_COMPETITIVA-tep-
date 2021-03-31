//Easy Linear Programming AtCoder - abc167_b

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
    long long a,b,c,k;
    cin>>a>>b>>c>>k;
    if(k<=a){cout<<k<<endl;}
    else if(k>a && k<=(a+b)){cout<<a<<endl;}
    else if(k>a && k>(a+b)){
        k=a+b+c-k;
        k=c-k;
        cout<<a+(k*(-1))<<endl;
    }
    

    return 0;
}