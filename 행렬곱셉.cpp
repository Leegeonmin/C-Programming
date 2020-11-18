#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;
  for(int i = 0; i < count; i++){
    int rowa, col, rowb;
    cin >> rowa >> col >> rowb;
    int mata[rowa][col];
    int matb[col][rowb];
    int matc[rowa][rowb];

    for(int n = 0; n < rowa; n++){
      for(int z = 0; z < col; z++){
        int a;
        cin >> a;
        mata[n][z] = a;
      }
    }
    for(int n = 0; n< col; n ++){
      for(int z= 0; z < rowb; z++){
        int b;
        cin >> b;
        matb[n][z] = b;
      }
    }


    for(int n =0; n < rowa; n++){
      for(int z = 0; z < rowb; z++){
        int sum = 0;
        for(int c = 0; c < col; c++){
          sum += mata[n][c]*matb[c][z];
        }
        matc[n][z] = sum;
      }
    }

    for(int n= 0; n < rowa; n++){
      for(int z = 0; z < rowb; z++){
        cout << matc[n][z] << " ";
      }
      cout << endl;
    }
  }
}
