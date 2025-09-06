#include <stdio.h>
#include <conio.h>
float main() {
  float m,p,c,avg;
  printf("enter your physics marks :"); 
  scanf("%f",&p); 
  printf("enter your chemistry marks :"); 
  scanf("%f",&c); 
  printf("enter your maths marks :"); 
  scanf("%f",&m);
  avg = (m + p + c)/3;
  if (m<35 || p<35 || c<35){
  printf("you are fail"); 
}
else if (avg >= 35 && avg<50){
printf("third class"); 
}
else if (avg >= 50 && avg<60){
printf("second class"); 
}
else if (avg >= 60 && avg<70){
printf("first class"); 
}
else if (avg >= 70){
printf("distinction"); 
}
}
