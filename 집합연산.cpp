#include <iostream>
using namespace std;

int main(){
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    int seta, setb;
    int mata[132]={0}, matb[132]={0}, insec[132]={0}, uni[132]={0}, dif[132]={0};
    int Countint =0, Countuni =0, Countdif =0;
    cin >> seta;
    for(int n = 0; n < seta; n++){
      int a;
      cin >> a;
      mata[a] = 1;
    }
    cin >> setb;
    for(int n = 0; n < setb; n++){
      int b;
      cin >> b;
      matb[b] = 1;
    }

    for(int n = 0; n < 132; n++){

      insec[n] = mata[n] & matb[n];
      uni[n] = mata[n] | matb[n];
      dif[n] = mata[n] & (!matb[n]);
      if(insec[n]==1){
        Countint++;
      }
      if(uni[n]==1){
        Countuni++;
      }
      if(dif[n]==1){
        Countdif++;
      }
    }


    cout << Countint << " ";
    for(int n = 0; n < 132; n++){
      if(insec[n]==1){
        cout << n << " ";
      }
    }
    cout << endl;

    cout << Countuni << " ";
    for(int n = 0; n < 132; n++){
      if(uni[n]==1){
        cout << n << " ";
      }
    }
    cout << endl;

    cout << Countdif << " ";
    for(int n = 0; n < 132; n++){
      if(dif[n]==1){
        cout << n << " ";
      }
    }
    cout << endl;

  }

  return 0;
}
