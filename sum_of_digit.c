//Enter a positive number and find the sum of digit
#include<stdio.h>
#include<conio.h>
int main(){
	unsigned int n;
	int sum=0,rem;
	printf("Enter a positive interger: ");
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("sum is = %d",sum);
	getch();
	return 0;
}
