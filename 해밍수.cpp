#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main(){
  int count;
  cin >> count;
  vector<int>a;

  for(int i = 0; i < 30; i++){
    for(int j = 0; j < 19; j++){
      for(int k = 0; k < 13; k++){
        if(int(pow(2, i)*pow(3, j)*pow(5, k)) <0){
          continue;
        }else{
          a.push_back(pow(2, i)*pow(3, j)*pow(5, k));
        }
      }
    }
  }

  sort(a.begin(), a.end());

  for(int i = 0; i < count; i++){
    int n;
    cin >> n;
    cout << a[n-1] << endl;
  }

  return 0;
}
