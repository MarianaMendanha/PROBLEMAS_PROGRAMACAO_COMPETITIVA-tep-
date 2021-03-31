//Count on Cantor UVA - 264 

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

	int posi;
    int i=0,a=0,fim=0;

	while(cin >> posi){
		a=0;
		for(i=0; a<posi; i++){a += i;}
		i--;
        fim = i;
		int num[i];
		int den[i];
		for(int j=0; j<fim ; j++){
			num[j]=j+1;
			den[j]=i;
			i--;
		}
		if(fim%2==0){cout <<"TERM "<< posi <<" IS "<< (num[fim-(a-posi)-1]) <<"/"<< (den[fim-(a-posi)-1]) <<endl;
	    }else{cout <<"TERM "<< posi <<" IS "<< (num[a-posi]) <<"/"<< (den[a-posi]) <<endl;}
	}
}