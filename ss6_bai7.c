#include<stdio.h>
int main (){
	int a,i,num;
	printf("Moi ban nhap so nguyen: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if (num%i==0){
		printf("%d\n",i);}
		
	}
	
	
	return 0;
}
