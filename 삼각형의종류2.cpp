#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
  int count;
  cin >> count;
  for(int i = 0; i < count; i++){
      float x1, y1, x2, y2, x3, y3;
      cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
      if(abs((y1-y2)/(x1-x2)) == abs((y2-y3)/(x2-x3)) ||
        abs((y1-y2)/(x1-x2)) == abs((y3-y1)/(x3-x1)) ||
        abs((y2-y3)/(x2-x3)) == abs((y3-y1)/(x3-x1))){
          cout << 0 << endl;
          continue;
      }

      int a, b, c;
      a = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
      b = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);
      c = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
      if(a > b && a > c){
        if(a == b + c){
          cout << 1 << endl;
        }else if(a > b + c){
          cout << 2 << endl;
        }else{
          cout << 3 << endl;
        }
      }else if(b > a && b > c){
        if(b == a + c){
          cout << 1 << endl;
        }else if(b > a + c){
          cout << 2 << endl;
        }else{
          cout << 3 << endl;
        }
      }else{
        if(c == a + b){
          cout << 1 << endl;
        }else if(c > a + b){
          cout << 2 << endl;
        }else{
          cout << 3 << endl;
        }
      }
  }
}
