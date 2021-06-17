/* Enter your solutions in this file */
#include <stdio.h>
int max(int x[], int n){
 int sol=x[0];
  
  for (int i=1;i<n;i++){
    if(x[i]>sol){
      sol= x[i];
    }
  }
  return sol;
}

int min(int x[], int n){
  int ans=x[0];
  
  for (int i=1;i<n;i++){
    if(x[i]<ans){
      ans= x[i];
    }
  }
  return ans;
}

float average(int x[], int n){
 
  
  int sum=0;
  for (int i=0;i<n;i++){
    sum+=x[i];
  }
  
  return sum/(float)n;
}

int mode(int x[], int n){
 int mode=0;
  int max=0;
 if(n==1){
  return x[0];
  }
 
      for (int i=0;i<n;i++){
       int count=0;
       for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
       count++;
      }
      }
 if(count>max){
  max=count;
  mode=a[i];
 }
}
   return mode;
}
 
 int factors(int n, int x[]){
  int count=0;
  for (int i=1;i<100;i++){
   
   if(n>1){
    
    for(int j=2; j<=100;j++){
     
   if (n%j==0){
    
    x[i]=j;
     count++;
    n=n/j;
    break;
   }
  }
   }
   else{
    break;
   }
  }
  
  return count;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
