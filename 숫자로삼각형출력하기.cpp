#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;

  for (int i = 0; i < count; i++){
    int k;
    cin >> k;

    for (int z = 1; z < k+1; z++){
      for (int n = 1; n <= z; n++){
        if (n == 1){
          cout << z << " ";
        }else{
          cout << z + ((n-1) * (k-1)) - (((n - 1) * (n -2))/2) << " ";
        }
      }
      cout << endl;
    }
  }
}
