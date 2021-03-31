//Colorful Transceivers AtCoder - abc097_a 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>

using namespace std;

int main(){
    
    int a,b,c,d;

    cin >> a >> b >> c >> d;   

    if(fabs(a-c)<=d || (fabs(a-b)<=d && (fabs(b-c)<=d))){cout << "Yes" << endl;}
    else{cout << "No" << endl;} 

return 0;
}