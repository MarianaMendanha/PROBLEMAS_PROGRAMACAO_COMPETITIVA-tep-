//CD UVA - 11849 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main(){
    
    long long M,N,MN;
    int i,u=0;
    set<long long> mn;
    mn.clear();
    
    while(cin >> M >> N && M!=0 && N!=0){
        while(M--){
            cin >> MN;
            mn.insert(MN);
        }
        while(N--){
            cin >> MN;
            if((mn.find(MN)) != mn.end()){
                u++;
            }
        }
        cout << u << endl;
        u=0;

        mn.clear();
    }
return 0;
}
