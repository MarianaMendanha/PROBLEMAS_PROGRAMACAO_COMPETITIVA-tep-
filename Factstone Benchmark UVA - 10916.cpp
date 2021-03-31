//Factstone Benchmark UVA - 10916

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

    int y,i;
    while(cin >> y && y!=0){
        y = (y-1960)/10+2;
        double sum = 1<<y;
        for(i=1; sum>0; i++){
            sum -= (log10(i)) / (log10(2));
        }
        cout << (i-2) <<endl;
    }

return 0;
}