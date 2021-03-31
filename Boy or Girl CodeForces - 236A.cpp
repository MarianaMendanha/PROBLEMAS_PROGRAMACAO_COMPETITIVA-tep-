//Boy or Girl CodeForces - 236A 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <string>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    //char n[105],nf[105];
    string n;
    //int j=0;

    cin >> n;

    //cin.getline(n,102);
    //cout << strlen(n);
    sort(n.begin(), n.end());

    /*for(int i=0; i<=strlen(n); i++){
        if(n[i] != n[i+1]){
            nf[j]=n[i];
            j++;
        }
    }*/
    n.erase(unique(n.begin(), n.end()), n.end());
    //cout << n << endl;
    
    /*if(strlen(nf)>=26){
        j=26;
    }else{j=strlen(nf);}*/
    //cout << nf << endl << j;
    
    if(n.length()%2==0){cout << "CHAT WITH HER!" << endl;}
    else{cout << "IGNORE HIM!" << endl;}

return 0;
}
