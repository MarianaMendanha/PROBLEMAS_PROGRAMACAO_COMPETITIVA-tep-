//Little Girl and Maximum XOR CodeForces - 276D 

#include<vector>
#include<bitset>
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    long long l,r;
    int i;

    cin >> l >> r;
 
    if(l==r){cout << "0"<<endl; return 0;}

    bitset<64> binr(r),binl(l),x,y,ans;

    for(i=63; i>=0; i--){
        if(binr[i]!=binl[i]){break;}
        if(binr.test(i) && binl.test(i)){x.set(i);y.set(i);}
    }

    for(int j=i-1; j>=0; j--){
        x.set(j);
    }

    y.set(i);
    for(int j=i-1; j>=0; j--){
        y.reset(j);
    }

    for(int j=63; j>=0; j--){
       ans[j]=(x[j])^(y[j]); 
    }
    cout << ans.to_ullong() <<endl; 

    return 0;
}