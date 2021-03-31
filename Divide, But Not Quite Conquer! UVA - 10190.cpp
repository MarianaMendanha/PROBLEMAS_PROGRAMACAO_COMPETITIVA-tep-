//Divide, But Not Quite Conquer! UVA - 10190 


#include <iostream>

using namespace std;

int main() {
    
  int n{}, m{};
  
  while (cin >> n >> m) {
      
    int a[100]{n}, k{1};
    bool boring{(m == 1 || m == 0 || m > n) ? true : false};

    while (!boring && n != 1) {
      if (n % m != 0) {
        boring = true;
      }
      n /= m;
      a[k++] = n;
    }
    if (!boring) {
      cout << a[0];
      for (int i{1}; i < k; ++i) {
        cout << ' ' << a[i];
      }
      cout << '\n';
    } else {
      cout << "Boring!\n";
    }
  }

  return 0;
}