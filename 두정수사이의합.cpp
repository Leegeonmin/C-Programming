#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> z;
    int result[z];

    for (int a = 0; a < z; a++){
      result[a] = 0;
    }



    for (int n = 0; n < z ; n++){
      cin >> x >> y;
      if (x == y){
        result[n] = x;
      } else
      for(int i = x; i <= y; i ++){

        result[n] += i ;
      }

    }

    for(int o = 0; o < z; o ++){
      cout << result[o] << endl;
    }



}
