#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    int size;
    cin >> size;
    char clock[size][size];


    for (int z = 0; z < size; z++){
      for (int q = 0; q < size; q++){
        clock[z][q] = '-';
      }
    }


    for(int n = 0; n < size; n++){
        int maxcount = (size + 1) / 2;
        int mincount = (size - 1) / 2;
        int v = n;
        int c = 0;
        for(int z = 0; z < size; z++){
          if (n <= mincount){
            if(n == z){
              clock[n][z] = '*';
              while(clock[n][v] == '*' && c < mincount - n){
                if(v + 2 <= size){
                  clock[n][v+2] = '*';
                  v += 2;
                  c++;
                }
              }
            }
          }
        }
    }
    for(int g = 0; g < (size - 1) / 2; g++){
      for(int k = 0; k < size; k++){
        if (clock[g][k] == '*'){
          clock[size-1-g][size-1-k] = clock[g][k];
        }
      }
    }

    for(int t = 0; t < size; t++){
      for(int a = 0; a < size; a++){
        if(clock[t][a-1] == '*' && clock[t][a+1] == '*' && a+1<size && a-1>=0) {
          clock[t][a] = '+';
        }
      }
    }


    for (int z = 0; z < size; z++){
      for (int q = 0; q < size; q++){
        cout << clock[z][q];
      }
      cout << endl;
    }


  }
}
