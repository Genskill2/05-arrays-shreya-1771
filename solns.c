/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[], int sol){
  int sol=0;
  int n= sizeof(x)/sizeof(x[0]);
  for (int i=0;i<n;i++){
    if(x[i]<x[i+1]){
      sol= x[i+1];
    }
  }
  return sol;
}
