//Equation CodeForces - 20B 

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

double a,b,c,ans,x1,x2;
int main(){

	cin >> a >> b >>c;
	if(a==0){
		if(b==0){
			if(c==0){cout<<-1;return 0;}
            else{cout<<0;return 0;}
        }else{
            cout <<1<<endl;
            cout <<fixed<<setprecision(10);
            cout <<(-c/b);
            return 0;
        }
    }else{
		ans = (b*b)-(4*a*c);
		if(ans<0){cout<<0;return 0;}
		x1 = (-b+sqrt(ans))/2/a;
        x2 = (-b-sqrt(ans))/2/a;
		if(x1==x2){
            cout <<1<<endl;
            cout <<fixed<<setprecision(10);
            cout <<x1;
            return 0;
        }else{
            cout <<2<<endl;
            cout <<fixed<<setprecision(10);
            cout <<min(x1,x2) <<endl<< max(x1,x2);
            return 0;
        }
	}
	return 0;
}