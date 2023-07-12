#include<stdio.h>

void main(){
int i,j,s;
int x = 0;

printf("enter the first number :    ");
scanf("%d",&j);

printf("enter the last number :    ");
scanf("%d",&s);

int a[s+j];

for(i=j;i<=s;i++){
if(i%4==0){
   a[x]=i;
   x++;
}}
printf("The leap year's are:  \n");
for(i=0;i<x;i++){
printf("%d\n",a[i]);
}

}
