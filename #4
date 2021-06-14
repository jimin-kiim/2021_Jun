#include <stdio.h>

int min(int a[], int size) {
 int minVal=a[0];
 for (int i=size; i>0; i--)
  if (a[i]<minVal) minVal=a[i];
 return minVal;
 }
 
 int minIndex(int a[], int size){
  int minIndex=0;
  for (int i=size; i>0; i--)
    if (a[i]<a[minIndex]) minIndex=i;
  return minIndex;
  }
  
  
  int main(){
    int a[]={3,-9,5,67,23,-30,4,6,10,13};
    printf("%d",min(a,10));
    printf("%d",minIndex(a,10));
    
    }
  
  
