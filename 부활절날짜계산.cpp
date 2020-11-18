#include <iostream>
using namespace std;

int main(){
  int inputnum;
  cin >> inputnum;

  int result[inputnum];

  for(int z = 0; z < inputnum; z++){
    int year;
    cin >> year;

    int c = year / 100;
    int n = year - ((year / 19) * 19);
    int t = (c - 17) / 25;
    int i = (c - (c / 4) - ((c - t) / 3)) + ((n * 19) + 15);
    int j = i - ((i / 30) * 30);
    int k = j - ((j / 28) * (1 - (j / 28)) * (29 / (j + 1)) * ((21 - n) / 11));
    int l = (year + (year / 4) + j + 2) - c + (c / 4);
    int p = l - ((l / 7) * 7);
    int q = k - p;
    int month = ((q + 40) / 44) + 3;
    int day = (q + 28) - ((month / 4) * 31);
    cout << month << " " << day << endl;
  }
}
