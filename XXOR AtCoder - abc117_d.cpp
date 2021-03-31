//XXOR AtCoder - abc117_d 

#include<vector>
#include<bitset>
#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    long long n,k;
    vector<long long> v; 
    long long TopSum=0;
    int TopBit;

    cin >> n >> k;
    for(int i=0; i<n; i++){
        long long num;
        cin >> num;
        v.push_back(num);
    }

    if(k==0){
        cout << v[0] << endl;
        return 0;
    }

    bitset<64> bin(k);

    for(int i=63; i>=0; i--){
        if(bin[i]==1){
            TopBit=i;
            break;
        }
    }

    TopSum=0;
    for(auto vn : v){TopSum += vn^k;}
    
    for(int i=TopBit; i>=0; i--){
        long long Bit = (long long)bin[i];
        int nBit;

        if(Bit==0){nBit=1;}
        if(Bit==1){nBit=0;}
        bin[i] = nBit;

        long long Num = (long long)bin.to_ulong();
        if(Num>k){
            bin[i] = Bit;
        }else{
            long long Sum=0;
            for(auto vn : v){Sum += vn^Num;}

            if(Sum>TopSum){TopSum=Sum;}
            else{bin[i]=Bit;}
        }
    }
    cout << TopSum << endl;

    return 0;
}