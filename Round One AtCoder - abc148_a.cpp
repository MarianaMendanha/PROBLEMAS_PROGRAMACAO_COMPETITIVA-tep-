//Round One AtCoder - abc148_a 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>

using namespace std;

int main(){
    
    int a,b;
    cin >> a >> b;
    if((a==1 && b==2) || (a==2 && b==1)){cout << "3" << endl;}
    if((a==2 && b==3) || (a==3 && b==2)){cout << "1" << endl;}
    if((a==1 && b==3) || (a==3 && b==1)){cout << "2" << endl;}

return 0;
}