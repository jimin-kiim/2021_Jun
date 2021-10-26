#include <stdio.h>

int main() {
  int i,j;
  int heighest=0;
  int lowest=0;
  int distance=0;
  
  struct Point {
  char* name;
  int height;
  int distance;
  };
  
  typedef struct Point POINT;
  
  POINT jirisan[9];
  jirisan[0]={"성삼재", 1000, 2.5}
  jirisan[1]={"노고단", 1500, 5}
  jirisan[2]={"삼도봉", 1500, 1.7}
  jirisan[3]={"토끼봉", 1550, 5.65}
  jirisan[4]={"벽소령", 1350, 3}
  jirisan[5]={"칠선봉", 1510, 2.8}
  jirisan[6]={"촛대봉", 1710, 4.1}
  jirisan[7]={"천왕봉", 1910, 5}
  jirisan[8]={"중산리", 560, 0}
  
  for(i=0; i<9, i++){
    for(j=i; j<9, j++){
     if(jirisan[i].height > jirisan[j].height)
      highest = i;
     else if (jirisan[i].height < jirisan[j].height)
      highest = j;
     }
  }
  
  for(i=0; i<9, i++){
    for(j=i; j<9, j++){
     if(jirisan[i].height > jirisan[j].height)
      lowest = j;
     else if (jirisan[i].height < jirisan[j].height)
      lowest = i;
     }
  }
  
  for(i=0; i<9; i++){
   distance += jirisan[i].distance;
  }
  
  
  printf("%f", jirisan[highest].height-jirisan[lowest].height);
  printf("%c %c", jirisan[highest].name, jirisan[lowest].name);
  printf("%d", distance);
  
}
