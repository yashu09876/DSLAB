#include<stdio.h>
int main()
{
    int roll_no;
	char name[50];
	int marks[5],total = 0;
	int i;
	printf("Enter Roll number: ");
	scanf("%d",&roll_no);
	printf("Enter Name: ");
	scanf("%[^\n]",name);
	for(i = 0; i < 5; i++) {
		printf("Enter marks for subject %d: ", i+1);
		scanf("%d",&marks[i]);
	}
	printf("\n--- student details (using array)---\n");
	printf("Roll Number: %d\n", roll_no);
	printf("Name: %s\n", name);
	printf("Marks: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", marks[i]);
		}
		printf("\n Total: %d\n",total);
		return 0;
		}
