//Unhappy Hacking (ABC Edit) AtCoder - abc043_b

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>
#include <algorithm>


using namespace std;

int main(){

    char s[15],sf[15];
    int j=0;
    cin >> s;

    for(int i=0; i<strlen(s); i++){
        if(s[i]=='0'){sf[j]='0'; j++;}
        if(s[i]=='1'){sf[j]='1'; j++;}
        if(s[i]=='B' && j!=0){j--;}
    }
    for(int i=0; i<j; i++){
        cout << sf[i];
    }
    //cout << "--->" << '\b' << "<---";
    
return 0;
}
