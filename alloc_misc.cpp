#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char **argv){
  //with nothrow, instead of bad_alloc exception which leads to direct
  //termination of the program, this program continues, assigning NULL
  //to the pointer
  int *ptr1 = new (nothrow) int[5]; 
  if(ptr1 == nullptr){
    cout << "Allocation failed, program continues" << endl;
  }
  free(ptr1);
 
  //freeing NULL pointer wouldn't throw error
  int *ptr2 = NULL;
  free(ptr2);
  return 0;
}
