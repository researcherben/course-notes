// next_permutation example
// http://www.cplusplus.com/reference/algorithm/next_permutation/

#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort

#define NUM_ELEMENTS 12

void print_ary(int * myints);

int main () {
  int myints[NUM_ELEMENTS];
  int loop_count=0;
  for (int indx=0; indx<NUM_ELEMENTS; indx++){
    myints[indx]=indx+1;
  }

  std::sort (myints,myints+NUM_ELEMENTS);

  //std::cout << "The " << NUM_ELEMENTS << "! possible permutations:\n";
  do {
    //print_ary(myints);
    loop_count++;
  } while ( std::next_permutation(myints,myints+NUM_ELEMENTS) );

  //std::cout << "After loop: ";
  //print_ary(myints);
  std::cout << "loop count= " << loop_count << std::endl;

  return 0;
}

void print_ary(int * myints){
      for (int indx=0; indx<NUM_ELEMENTS; indx++){
        std::cout << myints[indx] << ' ' ;
      }
      std::cout << std::endl;
}
