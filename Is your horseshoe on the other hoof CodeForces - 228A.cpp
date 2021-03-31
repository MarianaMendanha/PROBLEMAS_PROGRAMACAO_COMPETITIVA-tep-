//Is your horseshoe on the other hoof? CodeForces - 228A 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    
    int a[5],p=0,i;

    for(i=0; i<4; i++){
        cin >> a[i];
    }
    sort(a, a+4);
    for(i=0; i<3; i++){
        if(a[i] == a[i+1]) {
            p++;
        }        
    }
    cout << p << endl;


return 0;
}