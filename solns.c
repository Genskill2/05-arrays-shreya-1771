/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[], int n){
 int sol=0;
  //int n= sizeof(x)/sizeof(x[0]);
  for (int i=0;i<n;i++){
    if(x[i]<x[i+1]){
      sol= x[i+1];
    }
  }
  return sol;
}

int min(int x[], int n){
  int ans=0;
  //int n= sizeof(x)/sizeof(x[0]);
  for (int i=0;i<n;i++){
    if(x[i]>x[i+1]){
      sol= x[i+1];
    }
  }
  return ans;
}

float average(int x[], int n){
 // int n= sizeof(x)/sizeof(x[0]);
  float avg=0.0;
  float sum=0.0;
  for (int i=0;i<n;i++){
    sum+=x[i];
  }
  avg= (float)sum/n;
  return avg;
}
