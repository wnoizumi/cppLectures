/* In this exercise you'll modify this program.
 * You have to collect the following information:
 * Age
 * Living city
 * At the end of the program you'll print everthing. Example:
 * Your full name is Willian Oizumi, you're 23 years old and you live in Rio. 
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  string name, surname;
  cout << "What's your first name?\n";
  cin >> name;
  cout << "What's your surname?\n";
  cin >> surname;
  
  //your code here!

  cout << "\n---------------------\n";
  //modify the following line to print the additional information
  cout << "Your full name is " << name << " " << surname;
  return 0; 
}
