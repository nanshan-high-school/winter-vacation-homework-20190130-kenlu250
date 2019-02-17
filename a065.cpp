#include <iostream>
using namespace std;

int main() {
  string word;

  for (int i = 0; i < 7; i++){
    cin >> word[i];
  }

  //第一位
  if (word[1] > word[0]){
    cout << (int)word[1] - word[0];
  }
  else{
    cout << (int)word[0] - word[1];
  }
  //第二位
  if (word[2] > word[1]){
    cout << (int)word[2] - word[1];
  }
  else{
    cout << (int)word[1] - word[2];
  }
  //第三位
  if (word[3] > word[2]){
    cout << (int)word[3] - word[2];
  }
  else{
    cout << (int)word[2] - word[3];
  }
  //第四位
  if (word[4] > word[3]){
    cout << (int)word[4] - word[3];
  }
  else{
    cout << (int)word[3] - word[4];
  }
  //第五位
  if (word[5] > word[4]){
    cout << (int)word[5] - word[4];
  }
  else{
    cout << (int)word[4] - word[5];
  }
  //第六位
  if (word[6] > word[5]){
    cout << (int)word[6] - word[5];
  }
  else{
    cout << (int)word[5] - word[6];
  }
}
