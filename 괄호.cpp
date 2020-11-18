#include <iostream>
#include <stack>
using namespace std;

int main(){
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    string in;
    cin >> in;
    int result = 1;
    stack<char> line;

    for(int n = 0; n < in.length(); n++){
      if((in[n] == '(') || (in[n] == '{') || (in[n] == '[')){
        line.push(in[n]);
      }
      if((in[n] == ')') || (in[n] == '}') || (in[n] == ']')){
        if(in[n] == ')'){
          if(line.empty() == 1){
            result = 0;
            break;
          }
          if(line.top() == '('){
            line.pop();
          }else{
            result = 0;
            break;
          }
        }

        if(in[n] == '}'){
          if(line.empty() == 1){
            result = 0;
            break;
          }
          if(line.top() == '{'){
            line.pop();
          }else{
            result = 0;
            break;
          }
        }

        if(in[n] == ']'){
          if(line.empty() == 1){
            result = 0;
            break;
          }
          if(line.top() == '['){
            line.pop();
          }else{
            result = 0;
            break;
          }
        }
      }

    }

    if(line.empty()){
    }else{
      result = 0;
    }
    cout << result << endl;


  }

}
