#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
  ifstream readFile;
  int count;
  readFile.open("input.txt");
  readFile >> count;

  for(int i = 0; i < count; i++){
    int row, col;
    readFile >> row >> col;
    vector<vector<int>> mata(row, vector<int>(col,0)),
    matb(row, vector<int>(col,0)),  sum(row, vector<int>(col,0));

    for(int n = 0; n < row; n++){
      for(int z = 0; z < col; z++){
        readFile >> mata[n][z];
      }
    }
    for(int n = 0; n < row; n++){
      for(int z = 0; z < col; z++){
        readFile >> matb[n][z];
      }
    }
    for(int n = 0; n < row; n++){
      for(int z = 0; z < col; z++){
        sum[n][z] = mata[n][z] + matb[n][z];
        cout << sum[n][z] << " ";
      }
      cout << endl;
    }

  }
  readFile.close();
  return 0;
}
