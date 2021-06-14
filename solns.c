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

int mode(int x[], int n){
 int arr[100];
 for (int i=0; i<100; i++{
  arr[i]=0;
 }
      for (int i=0;i<n;i++){
       arr[x[i]]++;
      }
      
      for (int i=0;i<100;i++){
       if arr[i]>a[i+1]{
       lar=i;
      }
       return lar;
      }
 
 int factors(int a, int x[]){
  int j=0;
  for (int i=1;i<a;i++){
   
   if (a%i==0){
    x[j]=i
     j++;
   }
  }
  int n= sizeof(x)/sizeof(x[0]);
  for(int i=0; i<n; i++){
   int count++;
  }
  
  return count;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
