#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    int x1, y1, x2, y2, x3, y3, x4 ,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    int result;
    if(x1 == x2){ // x1x2 vertical
      if((x3 <= x1) != (x1 <= x4)){
        result = 0;
      }else{
        if((y1 < y3) != (y3 < y2)){
          result = 0;
        }else if((x1 == x3) || (x1 == x4)){
          result = 2;
        }else{
          result = 1;
        }

      }
    }

    else{
      cout << "COME" << endl;
      if(((y1 > y3) && (y1 > y4)) || ((y1 < y3) && (y1 < y4))){
        result = 0;
      }else{
        if((y1 == y3) || (y1 == y4) || (x3 == x1) || (x3 == x2){
          result = 2;
        }else if((y3 < y1) != (y1 < y4)){
          result = 1;
        }else{
          cout << "REAL" << endl;
          result = 0;
        }
      }
    }

    cout << result << endl;
  }
}
