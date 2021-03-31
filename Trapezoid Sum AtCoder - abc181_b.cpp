//Trapezoid Sum AtCoder - abc181_b

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
    long int a,b,ans=0,bns=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        ans=ans+(((a*(a+1))/2))-a;
        //cout<<ans<<endl;
        bns=bns+((b*(b+1))/2);
    }
    ans=bns-ans;
    cout<<ans<<endl;

    

  return 0;
}