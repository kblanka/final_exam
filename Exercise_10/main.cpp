#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int averageof_even_num(int* input_array, int array_length) {
  int total = 0;
  int count = 0;
  for (int i = 0; i < array_length; i++) {
    if (input_array[i] % 2 == 0) {
      total += input_array[i];
      count++;
    }
  }
  return total / count;
}

int main() {
  int my_array[] = { 1, 2, 3, 4, 5, 6 };
  cout << averageof_even_num(my_array, 6) << endl;
  return 0;
}

//Exercise 10:
//Create a function that takes an array of integers and returns the average of the even numbers from that array