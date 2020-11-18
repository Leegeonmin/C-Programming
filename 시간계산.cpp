#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;

  for (int i = 0; i < count; i++){
    int n, D;
    cin >> n;
    int sumh = 0;
    int summ = 0;
    int sums = 0;
    for(int z = 0; z < n; z++){
      int H, M, S, h, m, s;
      cin >> H >> M >> S >> h >> m >> s;
      sumh += h - H;
      summ += m - M;
      sums += s - S;
      if(sums >= 60){
        summ += sums/60;
        sums = sums%60;
      }
      if(summ >= 60){
        sumh += summ/60;
        summ = summ%60;
      }
      if(sumh >= 24){
        D = sumh/24;
        sumh = sumh%24;
      }else{
        D = 0;
      }

    }
    cout << D << " " << sumh << " " << summ << " " << sums << endl;
  }

}
