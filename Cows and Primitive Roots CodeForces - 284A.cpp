//Cows and Primitive Roots CodeForces - 284A 

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
    int p,root,count;
    
    cin >>p;
    root = p-1;
    count = root;
    for(int i=2; i*i<=root; i++){
        if(root%i == 0){
            do{
                root /= i;
            }while(root%i == 0);
            count = count/i*(i-1);
        }
    }
    if(root != 1){count = count/root*(root-1);}
    
    cout << count <<endl;

return 0;
}