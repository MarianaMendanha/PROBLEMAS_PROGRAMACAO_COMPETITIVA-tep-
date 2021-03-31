//Big Number UVA - 1185 

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

    int n,num;

    cin >> n;
    //while(n--){
        /*cin >> num;
        long double d=0;
        for(int i=1; i<=num; i++){
            d += log10(i);
        }
        cout << (floor(d))+1 <<endl;*/ 
        //Arr[0]=0;
        //for(int i=1; i<=10000000; i++){
          //  Arr[i]=Arr[i-1]+log(i);
        //}

		//cin >> num;
        //cout << setprecision(0) << fixed <<  floor(Arr[num]/log(10.0) + 1.0) <<endl;
    //}

    while(n--){
        cin>>num;
        double ans = 0;
        for(int i=1; i<=num; i++){ans  = ans+log10(i);}
        cout << (long long)(ans + 1) << endl;
    }
  
return 0;
}