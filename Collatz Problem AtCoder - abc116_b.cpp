//Collatz Problem AtCoder - abc116_b

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstring>
#include <climits>

using namespace std;

int main(){
    
    int s,i,a=0;
    int num[1001];
    
    cin >> s;
    num[1]=s;

    for(i=1; i<1000; i++){
        if(num[i]%2==0){
            num[i+1]=(num[i])/2;
        }else{
            num[i+1]=(3*(num[i]))+1;
        }    
    }
    if(s!=1 && s!=2){ 
        for(i=1; i<1000; i++){
            if(num[i]==4){
            a++; 
            if(a==2){
                break;
            }
            
            }
        }

        cout <<i<<endl; 

    }else{
        cout<<"4"<<endl;
    }

    return 0;
}