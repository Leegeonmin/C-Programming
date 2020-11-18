#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int count;
  cin >> count;
      int euc[count], rec[count];
  for(int i = 0; i < count;  i++){
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    int valx , valy ;


    if(((x1 <= x) && (x <= x2)) && ((y1 <= y) && (y <= y2))){
      valx = 0, valy = 0;
    }else if(((x1 <= x) && (x <= x2)) != ((y1 <= y) && (y <= y2))){
       if((x1 <= x) && (x <= x2)){
         valx = x;
         if(y >= y2){
           valy = y2;
         }else{
           valy = y1;
         }
       }else{
         valy = y;
         if(x >= x2){
           valx = x2;
         }else{
           valx = x1;
         }
       }
    }else{
      if(x > x2){
        valx = x2;
        if(y > y2){
          valy = y2;
        }else{
          valy = y1;
        }
      }else{
        valx = x1;
        if(y > y2){
          valy = y2;
        }else{
          valy = y1;
        }
      }
     }
    if (valx != 0 && valy != 0){
      euc[i] = (x-valx)*(x-valx) + (y-valy)*(y-valy);
      rec[i] = abs(x-valx) + abs(y-valy);
    }else{
      euc[i] = 0, rec[i] = 0;
    }

   }
   for(int i = 0; i< count; i++){
     cout << euc[i] << " " << rec[i] << endl;
   }
}
