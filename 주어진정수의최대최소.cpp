#include <iostream>
using namespace std;

int main(){
  int Count;
  cin >> Count;

  for(int z = 0; z < Count; z ++){
    int Setnum;
    int num1, num;
    int max;
    int min;
    int i = 0;

    cin >> Setnum;
    cin >> num1;
    max = num1;
    min = num1;

    while(i + 1 < Setnum){
      cin >> num;
      if (num >= max){
        max = num;
      }else if (num <= max){
          if (num <= min){
            min = num;
          }
        }
        i++;
      }
      cout << max << " " << min << endl;
    }
}
