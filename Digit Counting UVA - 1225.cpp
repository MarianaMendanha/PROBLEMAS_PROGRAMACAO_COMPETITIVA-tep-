//Digit Counting UVA - 1225

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
    
    vector<int> num;
    int lines,n;

    cin >> lines;

    while(lines--){
        cin >> n;
        for(int i=1; i<=n; i++){
            num.push_back(i);       
        }  
        
        stringstream stream;
        for(int i=0; i<num.size(); ++i){stream << num[i];}
        string s = stream.str();

        int n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){n0++;}
            if(s[i]=='1'){n1++;}
            if(s[i]=='2'){n2++;}
            if(s[i]=='3'){n3++;}
            if(s[i]=='4'){n4++;}
            if(s[i]=='5'){n5++;}
            if(s[i]=='6'){n6++;}
            if(s[i]=='7'){n7++;}
            if(s[i]=='8'){n8++;}
            if(s[i]=='9'){n9++;}
        }
        
        cout << n0;
        cout << " " << n1;
        cout << " " << n2;
        cout << " " << n3;
        cout << " " << n4;
        cout << " " << n5;
        cout << " " << n6;
        cout << " " << n7;
        cout << " " << n8;
        cout << " " << n9 <<endl;

        num.clear();
    }

    return 0;
}