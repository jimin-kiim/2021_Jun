# include <stdio.h>

int main() {
int start[]={6046,5007,1524,1342,1257,808,639,587,465,450};
float sum=0;
float temperature_change=0;
int year=2006;

for(int i=0; i<10; i++){
    sum+=start[i];
}
 
while (temperature_change<3){
  sum*=1.5;
  temperature_change=sum/100000*0.13;
  year+=1;
}

printf("%d",year);
}
