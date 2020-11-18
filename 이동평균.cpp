#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    int num, calnum =0;
    cin >> num;
    int arr[num];
    int cyclelist[256] = {0};
    int cycle;

    for(int n = 0; n < num; n ++){
      int val;
      cin >> val;
      arr[n] = val;
    }


    cin >> cycle;

    for(int n = 0; n+cycle-1 < num; n++){
      int p = n;
      for(int z = 0; z < cycle; z++){
        cyclelist[n] += arr[p];
        p++;
      }
      cyclelist[n] /= cycle;
      calnum++;
    }

    cout << calnum << " ";
    for(int n = 0 ; n < calnum; n++){
      cout << cyclelist[n] << " ";
    }
    cout << endl;
  }

}
