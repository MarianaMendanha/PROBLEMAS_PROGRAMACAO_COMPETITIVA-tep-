//Coconuts, Revisited UVA - 616

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
    
    int c,newc;
    while(cin>>c && c!=-1){
       int s=0,i,j;
        if(c==3){
            cout << c <<" coconuts, " << 2 << " people and 1 monkey" <<endl;
        }else{
            for(i=(sqrt(c)); i>=2; i--){
                newc = c;
                for(j=1; j<=i; j++){
                    if(newc%i==0 || newc%i!=1){break;}
                    else{newc=(newc-1)-((newc-1)/i);}
                }
                if(newc%i==0 && (j-1)==i){
                    s=1;
                    break;
                }
            }
            if(s==1){cout << c << " coconuts, " << i << " people and 1 monkey" <<endl;}
            else cout << c << " coconuts, no solution" <<endl;
        }  
    }
    
    return 0;
}
