#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;

    for (int i = 0; i < count; i++){
      int k;
      cin >> k;
      string list[k][k];
      for (int x = 0; x < k; x++){
        for (int y = 0; y < k; y++){
          if (x + y == k-1){
            if (x == y){
              list[x][y] = 'O';
            }else{
              list[x][y] = '*';
            }
          }else if (y == (k-1)/2){
            list[x][y] = 'I';
          }else if (x == (k-1)/2){
            list[x][y] = '+';
          }else{
            list[x][y] = '.';
          }
          cout << list[x][y];
        }
        cout << endl;
      }
    }
}
