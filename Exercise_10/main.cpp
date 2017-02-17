//Exercise 10:
//Create a function that takes an array of integers and returns the average of the even numbers from that array

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

void fill_vector_random(vector<int>& newVector, int newVector_length);

int averageof_even_num(vector<int>& newVector);

void print_vector(vector<int>& newVector);

int main() {
  vector<int> myVector;
  myVector.reserve(10);
  fill_vector_random(myVector, 10);
  print_vector(myVector);
  cout << "The average of the even numbers: " << averageof_even_num(myVector) <<endl;
  
  return 0;
}

void fill_vector_random(vector<int>& newVector, int newVector_length) {
  srand(time(NULL));
  for (int i = 0; i < newVector_length; i++) {
    int random_name = rand() % 10;
    newVector.push_back(random_name);
  }
}

int averageof_even_num(vector<int>& newVector) {
  int total = 0;
  int count = 0;
  for (int i = 0; i < newVector.size(); i++) {
    if (newVector[i] % 2 == 0) {
      total += newVector[i];
      count++;
    }
  }
  return total / count;
}

void print_vector(vector<int>& newVector) {
  cout << "The elements of the randomly generated vector: ";
  for (unsigned int i = 0; i < newVector.size(); i++) {
    cout << newVector[i] << ", ";
  }
  cout << endl;
}