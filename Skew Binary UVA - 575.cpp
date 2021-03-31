//Skew Binary UVA - 575

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
    
    int n,cont=0,i;
    string skew;  

    while((cin >> skew) && (skew!="0")){
        n=skew.length();
        /*for(int i=n; i>=n; i--){
            if(skew[i]=='2'){
                cont++;
            }
        }*/
        i=0;
        while(n > 0) {
			cont += ((skew[i])-'0') * (pow(2, n)-1);
			n--;
			i++;
		}
       cout << cont <<endl;
       skew.clear();
       cont=0; 
    }

    return 0;
}