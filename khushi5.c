#include<stdio.h>
main(){
	int n;
	int m;
	int i;
	
printf("Enter the first year: ");
scanf("%d",&n);

printf("Enter the last year: ");
scanf("%d",&m);

printf("The leap year between first & last year is: \n");
  for(i=n;i<=m;i++){
  	if(i%400==0 || i%100==0 || i%4==0){
  		printf("%d,",i);
	  }
  }
}
