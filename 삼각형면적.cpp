#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;
  for(int i = 0; i < count; i++){
    int ax, ay, bx, by, cx, cy;
    int Area;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    Area = ((bx - ax)*(cy - ay)) - ((cx - ax)*(by - ay));
    if(Area > 0){
      cout << Area << " " << 1 << endl;
    }else if(Area < 0){
      cout << -Area << " " << -1 << endl;
    }else{
      cout << 0 << " " << 0 << endl;
    }
  }
}
