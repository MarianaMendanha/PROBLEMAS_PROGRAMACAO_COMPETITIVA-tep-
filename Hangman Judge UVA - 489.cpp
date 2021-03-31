//Hangman Judge UVA - 489 

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

    int round;
    while (cin>>round && round!=-1){

        string sol, g;

        cin >> sol >> g;
        cout << "Round " << round << endl;

        int f = 0;
        for(int i=0; i<g.size() && f <= 6 && sol != ""; ++i){
            if(sol.find(g[i]) != string::npos){
                sol.erase(remove(sol.begin(),sol.end(),g[i]),sol.end());
            }
            else{f++;}
        }
        
        if(f==7){cout << "You lose." << endl;}
        else if(sol==""){cout <<"You win."<<endl;}
        else{cout <<"You chickened out."<<endl;}
    }
    return 0;
}