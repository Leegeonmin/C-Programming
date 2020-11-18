#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;
  int prip[count];

  for(int i = 0; i < count; i++){
    int a, b, c;
    cin >> a >> b >> c;

    if((a >= b+ c) || (b >= a + c) || (c >= a + b)){
      prip[i] = 0;
    }else if((a == b) || (b == c) || (a == c)){
      if (a == b){
        if(b == c){
          prip[i] = 1;
        }else{
          prip[i] = 3;
        }
      }else if(b == c){
        if(a == c){
          prip[i] = 1;
        }else{
          prip[i] = 3;
        }
      }else if(c == a){
        if(c == b){
          prip[i] = 1;
        }else{
          prip[i] = 3;
        }
      }
      }
    else if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
      prip[i] = 2;
    }else{
      prip[i] = 4;
    }
  }

  for(int n = 0; n < count; n++){
    cout << prip[n] << endl;
  }
}
