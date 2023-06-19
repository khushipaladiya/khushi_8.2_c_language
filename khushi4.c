#include<stdio.h>
void main(){
	int n;
printf("Enter the size of Array: ");
scanf("%d",&n);

	int i;
	int a[i];
	int square;
printf("Enter the elements of A \n");
  for(i=0;i<n;i++){
  	printf("Enter a[%d]: ",i);
  	scanf("%d",&a[i]);
  }

printf("the squares are: \n");
 for(i=0;i<n;i++){
    square=a[i]*a[i];
 	printf("%d\n",square);
 }
}
