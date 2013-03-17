#include <iostream>

using namespace std;

int main() {
  int number = 0;
  cout << "Factorial" << endl;
  cout << "Write the number: " << endl;
  cin >> number;
  int factorial = 1;
  for (int i = number; i >= 1; i--) {
    factorial = factorial * i;
  }
  cout << "The factorial of " << number << " is " << factorial;
  return 0;
}
