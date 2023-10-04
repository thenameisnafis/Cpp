#include <iostream>
using namespace std;

int main() {
   int a, b, c, d, second_smallest;

   cout << "Enter four integers: ";
   cin >> a >> b >> c >> d;

   if (a <= b && a <= c && a <= d) {
      if (b <= c && b <= d)
         second_smallest = b;
      else if (c <= b && c <= d)
         second_smallest = c;
      else
         second_smallest = d;
   }
   else if (b <= a && b <= c && b <= d) {
      if (a <= c && a <= d)
         second_smallest = a;
      else if (c <= a && c <= d)
         second_smallest = c;
      else
         second_smallest = d;
   }
   else if (c <= a && c <= b && c <= d) {
      if (a <= b && a <= d)
         second_smallest = a;
      else if (b <= a && b <= d)
         second_smallest = b;
      else
         second_smallest = d;
   }
   else {
      if (a <= b && a <= c)
         second_smallest = a;
      else if (b <= a && b <= c)
         second_smallest = b;
      else
         second_smallest = c;
   }

   cout << "The second smallest number is: " << second_smallest << endl;

   return 0;
}
