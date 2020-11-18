#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;
  int output[count][4];

  for(int i = 0; i < count; i++){
    int num;
    int sumD = 0, sumH = 0, sumM = 0, sumS = 0;
    cin >> num;

    for(int n = 0; n < num; n++){
      int H, M, S, h, m, s;
      cin >> H >> M >> S >> h >> m >> s;
      int a = 0, b = 0, c = 0 ,d = 0;

      b += h - H;
      if(m >= M){
        c += m - M;
      }else{
        b -= 1;
        m += 60;
        c = m - M;
      }
      if(s >= S){
        d += s - S;
      }else{
        if(c > 0){
            c -= 1;
            d += 60 + s - S;
        }else{
          b -= 1;
          c += 59;
          d += 60 + s - S;
        }
       }
       sumD += a;
       sumH += b;
       sumM += c;
       sumS += d;
    }

    if(sumS >= 60){
      sumM += sumS/60;
      sumS = sumS%60;
    }
    if(sumM >= 60){
      sumH += sumM/60;
      sumM = sumM%60;
    }
    if(sumH >= 24){
      sumD += sumH/24;
      sumH = sumH%24;
    }
    cout << sumD << " " << sumH << " " << sumM << " " << sumS << endl;
  }
}
