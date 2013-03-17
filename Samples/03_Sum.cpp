#include <iostream>

using namespace std;

int main() {
  cout << "Sum of two numbers" << endl;
  int firstNumber, secondNumber;
  cout << "Write the first number:"<< endl;
  cin >> firstNumber;
  cout << "Write the second number:"<< endl;
  cin >> secondNumber;
  int sum = firstNumber + secondNumber;
  cout << "Sum: " << sum;
  return 0;
}
