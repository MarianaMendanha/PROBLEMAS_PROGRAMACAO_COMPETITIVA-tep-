//Parity UVA - 10931

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>
#include <algorithm>
#include <bitset>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    long int I;
    int nb=0;
    bitset<32> bin,nbin;
    int sbin[32],j=0;
    
    while((cin >> I) && (I!=0)){
        bin = (long)I;
        
        int x=31;
        for(int i=31; i>=0; i--){
            if(bin[i]==1){
                nb++;
                if(nb==1){
                    j=x;}
            }
            x--;
        }

        cout << "The parity of ";

        if(j==0){
            cout << "1";
        
        }else{
            for(int x=j; x>=0; x--){
                cout << bin[x];
            }
        }

        cout << " is " << nb << " (mod 2)." <<endl;

        bin.reset();
        nb=0;
        j=0;
    }

    return 0;
}
