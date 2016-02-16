#include <iostream>
void print(){
   int a;
   std::cin >> a;
   if(a==0)return;
   print();
   std::cout << a << " ";

}
