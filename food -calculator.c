#include<stdio.h>
int main(){
int food,total=0;
printf("enter a food ");
scanf("%d",&food);
while(food!=0){
 total=food+total;
  printf("sum abhi tak =%d\n",total);
  printf("enter food");
  scanf("%d",&food);
}
printf("final price is =%d",total);
  return 0;
}
