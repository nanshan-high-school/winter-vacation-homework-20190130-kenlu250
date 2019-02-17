#include <iostream>
using namespace std;

int main() {

  int total = 0;
  int a = 8;
  string num;

  cin >> num;

  if (num[0] == 'A'){
    int key = 1;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'B'){
    int key = 10;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'C'){
    int key = 19;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    } 
  }
  else if (num[0] == 'D'){
    int key = 28;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'E'){
    int key = 37;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    } 
  }
  else if (num[0] == 'F'){
    int key = 46;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'G'){
    int key = 55;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'H'){
    int key = 64;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'I'){
    int key = 39;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'J'){
    int key = 73;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'K'){
    int key = 82;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'L'){
    int key = 2;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'M'){
    int key = 11;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'N'){
    int key = 20;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'O'){
    int key = 48;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'P'){
    int key = 29;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'Q'){
    int key = 38;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'R'){
    int key = 47;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'S'){
    int key = 56;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'T'){
    int key = 65;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'U'){
    int key = 74;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'V'){
    int key = 83;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'W'){
    int key = 21;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'X'){
    int key = 30;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'Y'){
    int key = 12;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  else if (num[0] == 'Z'){
    int key = 30;
    for (int i = 1; i < 10; i++){
      num[i] -= 48; // 1的ascii為49
    }

    for (int k = 1; k < 9; k++){
      total += num[k] * a;
      a -= 1;
    }

    total += key + num[9];

    if (total % 10 == 0){
      cout << "real";
    }
    else {
      cout << "fake";
    }
  }
  
}
