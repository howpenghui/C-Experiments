#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;
int main(){
  double *x = (double *)calloc(10,sizeof(double));
  for (int i = 0; i < 10; i++) x[i] = i+1;
  cout << "malloced x = " << x << endl;
  int a = 3;
  cout << "x[3] = " << x[a] << endl;
  cout << "3[x] = " << a[x] << endl;
  //float b = 3;
  //cout << x+b << endl;
  assert(x+2 == 2+x && x[2] == 2[x]);
  free(x);
  cout << "after freeing x, x[2] = " << x[2] << endl;
  double *y = (double *)calloc(10,sizeof(double));
  cout << "malloced y = " << y << endl;
  cout << "the end of y = " << y+10 << endl;
  cout << "freed x = " << x << endl;
  free(y);
  return 0;
}
