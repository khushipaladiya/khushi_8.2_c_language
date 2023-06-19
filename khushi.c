#include<stdio.h>
void main(){
	int i;
	int n;
	int m;
	int a[n];
	int b[m];
	int c[i];
printf("Enter the length of A: ");
scanf("%d",&n);
 
 printf("Enter elements of A: \n");
    for(i=0;i<n;i++){
    	printf("Enter A [%d]:",i);
    	scanf("%d",&a[i]);
	} 
printf("Enter the length of B: ");
scanf("%d",&m);	
 
 printf("Enter elements of B: \n");
    for(i=0;i<m;i++){
    	printf("Enter B [%d]:",i);
    	scanf("%d",&b[i]);
	}
	
 printf("Array of C: \n");
  for(i=0;i<n;i++){
  	printf("Array C[i] is: %d\n",a[i]);
  }	
  for(i=0;i<m;i++){
  	printf("Array C[i] is: %d\n",b[i]);
  }
}
