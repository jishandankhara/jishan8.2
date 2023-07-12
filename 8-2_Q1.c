#include<stdio.h>

void main()
{
int j,i,n1,n2;
	
printf("Enter array A's size :-");
scanf("%d",&n1);
	
int a[i],c[i];
printf("Enter array A's elements :- \n");
	
for(i=0;i<n1;i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
	c[i] = a[i];
}
j = i;
printf("Enter array B's size :-");
scanf("%d",&n2);
	
int b[i];
	printf("Enter array B's elements :- \n");
	
   for(i=0;i<n2;i++){
	printf("a[%d]=",i);
	scanf("%d",&b[i]);
	c[i] = b[i];
	j++;
}
	
printf("\nArray C is :- \n");
for(i=0;i<j;i++){
printf("%d  ",c[i]);}
}
