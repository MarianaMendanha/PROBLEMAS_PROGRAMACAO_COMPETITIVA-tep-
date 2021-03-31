// Bafana Bafana UVA - 11805 

#include <iostream>

using namespace std;

int main() {
    
  int t,n,k,p,i;
  
  cin >> t;
  
  for(i=1;i<=t;i++){
    cin >> n >> k >> p;
    if(((k+p)%n)!=0){
        cout << "Case " << i << ": "<< ((k+p)%n) << endl;
    }
    else{
        cout << "Case " << i << ": " << n << endl;
    }
  }

  return 0;
}
