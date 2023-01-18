#include<stdio.h>
void main()
{
	float Rs;
	int kg;
	int gm;
	float p;
	int k;
	printf("Enter the RS = ");
	scanf("%f",&Rs);
	printf("Enter the kg 1000 = ");
	scanf("%d",&kg);
	printf("Enter the gm = ");
	scanf("%d",&gm);
	
	k=1000*kg;
	p=(gm*Rs)/k;
	printf("Price = %f",p);
	printf("\npatato RS = 45");
//	scanf("%f",&Rs);
	//printf("Enter the kg 1000 = ");
	//scanf("%d",&kg);
	printf("\nEnter the gm = ");
	scanf("%d",&gm);
	
	k=1000;
	Rs=45;
	p=(gm*Rs)/k;
	printf("Patato Price = %f",p);
}
