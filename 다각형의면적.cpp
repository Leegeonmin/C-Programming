#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    int p;
    cin >> p;
    int list[p][2];

    for(int n = 0; n < p; n++){
      cin >> list[n][0] >> list[n][1];
    }

    double signA = 0;
    int dir = 1;
    for(int n = 0; n < p; n++){
      if(n == p-1){
        signA += ((double)(list[n][0] + list[0][0]) * (list[0][1] - list[n][1]) / 2);
      }else{
        signA += ((double)(list[n][0] + list[n+1][0]) * (list[n+1][1] - list[n][1]) / 2);
      }
    }

    if(signA < 0){
      dir = -1;
    }

    signA = abs(signA) * 2;

    cout << signA << " " << dir << endl;
  }
}
