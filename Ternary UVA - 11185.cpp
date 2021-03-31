//Ternary UVA - 11185 

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
    
    long long di;
    vector<int> ternary;
    while(cin>>di && di>=0){
        int i=0;
        if(di==0){cout<<0<<endl;}
        else{
            while(di>=1){
                ternary.push_back(di%3);
                di=di/3;
                //cout<<i<<"<-i "<<di<<"<-di "<<endl;
                i++;
            }
            for(int j=i-1; j>=0; j--){cout<<ternary[j];}
            cout<<endl;
            ternary.clear();
        }
    }

return 0;
}