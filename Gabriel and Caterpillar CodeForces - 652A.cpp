//Gabriel and Caterpillar CodeForces - 652A

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

    int h1,h2,a,b;
    while(cin>>h1>>h2>>a>>b){

        if((h1+(8*a))>=h2){cout<<0<<endl;}
        else if(a<=b && (h1+(8*a))<h2){cout<<-1<<endl;}
        else{
            int i=0;
            h1 += 8*a;
            a *= 12;
            b *= 12;

            while(true){
                i++;
                h1 += a-b;
                if(h1>=h2){break;}
            }
            cout<<i<<endl;
        }
    }

return 0;
}