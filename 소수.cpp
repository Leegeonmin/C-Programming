  #include <iostream>
  using namespace std;

  int main(){
    int count;
    cin >> count;

    for(int i = 0; i < count; i++){
      int num;
      cin >> num;
      int res = 1;
      for(int n = 2; n < num; n++){
        if(num % n == 0){
          res = 0;
          break;
        }
      }

      cout << res << endl;
    }
  }
