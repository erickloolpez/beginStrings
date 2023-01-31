#include <iostream>
#include <string>
using namespace std;

void exerciseOne() {
  char phrase[20];
  string aux = "aeiou";
  int num[] = {0, 0, 0, 0, 0};

  cout << "\n->Enter any phrase:";
  cin.getline(phrase, 20, '\n');


  for (int i = 0; i < 20; i++) {
    if(phrase[i] == aux[0])
      num[0] += 1;
    else if(phrase[i] == aux[1])
      num[1] += 1;
    else if(phrase[i] == aux[2])
      num[2] += 1;
    else if(phrase[i] == aux[3])
      num[3] += 1;
    else if(phrase[i] == aux[4])
      num[4] += 1;
  }

  for (int j = 0; j < 4; j++) {
    cout << "\nThe numbers of vowels [" << aux[j] << "]:" << num[j];
  }

  cout << endl;
}

void exerciseTwo() {}

int main() {
  int op = 0;
  char name[20];

  cout << "Enter your option [ 1/2 ]:";
  cin >> op;
  std::cin.ignore();

  if (op == 1)
    exerciseOne();
  else
    exerciseTwo();

  return 0;
}