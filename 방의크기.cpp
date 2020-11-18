#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void dfs(int, int, int, int);
string map[100][100];
bool visit[100][100];
int groups[100];
int id;

int main(){
  int count;
  cin  >> count;
  for(int i = 0; i < count; i++){
    int row, col;
    int x = 0, y = 0;
    cin >> row >> col;
    for(int n = 0; n < 100; n++){
      for(int m = 0; m < 100; m++){
        map[n][m] = ".";
        visit[n][m] = false;
      }
    }
    for(int n = 0; n < 100; n++){
      groups[n] = 0;
    }
    id = 0;

    for(int n = 0; n < col; n++){
      string s;
      cin >> s;
      for(int m = 0; m < row; m++){
        if(s[m] == '+'){
          map[n][m] = "+";
          visit[n][m] = true;
        }else if(s[m] == '.'){
          map[n][m] = ".";
          visit[n][m] = false;
        }
      }

    }
    for(int n = 0; n < col; n++){
      for(int m = 0; m < row; m++){
        if(visit[n][m] == false){
          groups[id] += 1;
          dfs(n, m, row, col);

          id++;
        }

      }
    }

    int a = 0;
    cout << id << endl;
    int sor[id];
    while(true){
      if(groups[a] == 0){
        break;
      }else{

        sor[a] = groups[a];
        a++;
      }
    }
    sort(sor, sor+id);
    for(int n = id-1; n >= 0; n--){
      cout << sor[n] << " ";
    }
    cout << endl;

  }

}

void dfs(int x, int y, int row, int col){
  int dx[4], dy[4];
  dx[0] = 0, dx[1] = 1, dx[2] = 0, dx[3] = -1;
  dy[0] = 1, dy[1] = 0, dy[2] = -1, dy[3] = 0;
  visit[x][y] = true;

  for(int i = 0; i < 4; i++){
    int ax = x + dx[i];
    int ay = y + dy[i];

    if(0 <= ax && ax < col && 0 <= ay && ay < row){
      if(map[ax][ay] == "." && visit[ax][ay] == false){
        groups[id] += 1;
        dfs(ax, ay, row, col);
      }
    }
  }
}
