#include <iostream> // library
#include <array> // includes the array library
#include <cstdio> // includes the cstudio library
#include <string> // includes the string library
#include <vector> // includes the vector library


int main() {
   std::array <int, 3> a = {1,2,3};
   std::printf("1,2,3");

   std::array <char,2>dog = {'h','i'};
   std::printf("%c\n", dog.at(1));
   
   std::array <bool,3> b ={true,false,true};
   bool first_element = b.at(0);
   std::printf("%d\n", first_element);

   std::vector<int> squid = {1,2,3};
   std::printf (%d,squid.at(0));

   std::vector<char> dog = {'h','i'}




   
   return 0;

}


   