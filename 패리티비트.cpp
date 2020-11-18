#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int count;
  cin >> count;
  unsigned long bina[32];

  for(int i = 0; i < count; i++){
    unsigned long a, res = 0;
    int num = 0;

    cin >> a;

    for(int n = 0; n < 32; n++){
      bina[n] = a % 2;
      a = a/2;

      if(bina[n] == 1){
        num++;
      }
    }

    if((num % 2) == 1){
      bina[31] = 1;

    }

    for(int n = 0; n < 32; n++){
      res += bina[n] * pow(2, n);
    }

    cout << res << endl;
    }
  }
