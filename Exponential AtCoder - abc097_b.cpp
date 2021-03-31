//Exponential AtCoder - abc097_b

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
#include <stdio.h>

using namespace std;

int main(){

    int x,ten;
	cin >> x;
 
	int res=1;
	for(int i=2; i*i<=x; i++){
		ten=1;
		for(int j=x; j/i>0; j/=i){ten*=i;}
		res = max(res,ten);
        //cout<<res<<endl;
	}
	cout << res <<endl;
	
return 0;
}