#include <stdio.h>

int main() {
  int i,j;
  int top=0;
  int lowest=0;
  double distance=0;
  
  typedef struct Point {
  char name[10];
  int height;
  double distance;
  }POINT;

    POINT jirisan[9]={{"성삼재", 1000, 2.5},{"노고단", 1500, 5},{"삼도봉", 1500, 1.7},{"토끼봉", 1550, 5.65},{"벽소령", 1350, 3},{"칠선봉", 1510, 2.8},{"촛대봉", 1710, 4.1},{"천왕봉", 1910, 5},{"중산리", 560, 0}};
  
    for(i=0; i<9; i++){
        for(j=i; j<9; j++){
     if(jirisan[i].height > jirisan[j].height)
         top = i;
     else if (jirisan[i].height < jirisan[j].height)
         top = j;
     }
  }
  
    for(i=0; i<9; i++){
        for(j=i; j<9; j++){
     if(jirisan[i].height > jirisan[j].height)
      lowest = j;
     else if (jirisan[i].height < jirisan[j].height)
      lowest = i;
     }
  }
  
  for(i=0; i<9; i++){
   distance += jirisan[i].distance;
  }
  
  
    printf("%d\n", jirisan[top].height-jirisan[lowest].height);
    printf("%s %s\n", jirisan[top].name, jirisan[lowest].name);
    printf("%.2f\n", distance);
  
}
