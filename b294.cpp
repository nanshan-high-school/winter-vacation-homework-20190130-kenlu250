#include <iostream>
using namespace std;

int main() {
  int day;

  cin >> day;

  int quantity[day-1];
  int money;
  int total = 0;

  for (int i = 0; i < day; i++){
    cin >> quantity[i];
    money = quantity[i] * (i+1);
    total += money;
  }
  cout << total;
}
