#include <iostream>
using namespace std;
int main(){
  int count;
  cin >> count;

  for (int i = 0; i < count; i++){
      int s, num;
      int sum = 1;
      cin >> s;
      for(int n = 0; n < s; n++ ){
        cin >> num;
        sum *= num % 10;
        if (sum >= 10){
          sum = sum % 10;
        }
      }
      cout << sum  << endl;
  }
}
