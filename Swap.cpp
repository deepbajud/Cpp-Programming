// swap two number
#include <iostream>
using namespace std;

int main() {
   int num1 = 12;
   int num2 = 87;
   int temp;

   temp = num1;
   num1 = num2;
   num2 = temp;

   cout << "num1 : " << num1 << endl;
   cout << "num2 : " << num2 << endl;
}
