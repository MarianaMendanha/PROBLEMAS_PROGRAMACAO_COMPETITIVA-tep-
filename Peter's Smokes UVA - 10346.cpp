// Peter's Smokes UVA - 10346

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
    
    int n,k,ans;

    while(cin >> n >> k){  
        ans=n;
        for(int i=0; n>=k; i++){
            ans=ans+(n/k);
            n=(n/k)+(n%k);
        }
        cout<<ans<<endl;    
    }

    return 0;
}

