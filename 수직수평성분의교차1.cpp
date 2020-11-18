#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;

    for(int i = 0; i < count; i++){
        int x1, y1, x2, y2, x3, y3, x4, y4;
        int asc;

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        if (x1 > x2){
            asc = x1;
            x1 = x2;
            x2 = asc;
        }if (x3 > x4){
            asc = x3;
            x3 = x4;
            x4 = asc;
        }if (y1 > y2){
            asc = y1;
            y1 = y2;
            y2 = asc;
        }if (y3 > y4){
            asc = y3;
            y3 = y4;
            y4 = asc;
        }

        if(y1 == y2){
          if((y3 <= y1) && (y1 <= y4)){
            if((x1 <= x3) && (x3 <= x2)){
              if((x1 == x3) || (x2 == x3) || (y1 == y3) || (y1 == y4)){
                cout << 2 << endl;
              }else{
                cout << 1 << endl;
              }
            }else{
              cout << 0 << endl;
            }
          }else{
            cout << 0 << endl;
          }
        }else if(x1 == x2){
          if((x3 <= x1) && (x1 <= x4)){
            if((y1 <= y3) && (y3 <= y2)){
              if((x3 == x1) || (x4 == x1) || (y1 == y3) || (y2 == y3)){
                cout << 2 << endl;
              }else{
                cout << 1 << endl;
              }
            }else{
              cout << 0 << endl;
            }
          }else{
            cout << 0 << endl;
          }
        }
    }

}
