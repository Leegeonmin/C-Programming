#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    int sumlist[count];
    for(int z = 0; z < count; z++){
      sumlist[z] = 0;
    }

    for(int i = 0; i < count; i++){
      int Setnum;
      int num;
      int sum = 0;
      cin >> Setnum;
      for(int n = 0; n < Setnum; n++){
          cin >> num;
          sum += num;
      }
      sumlist[i] = sum;

    }

    for(int z = 0; z < count; z++){
      cout << sumlist[z] << endl;
    }
}
