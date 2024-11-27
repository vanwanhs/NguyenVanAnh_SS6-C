#include<stdio.h>
int main (){
	int num1,num2,i;
	for (i=1;i<=100;i++){
		printf ("%d\n",i);
		if (i%3==0){
			printf("%d: fizz\n",i);
		}
		if (i%5==0){
			printf("%d: fuzz\n",i);
		}
		if (i%5==0 && i%3==0){
			printf("%d: fizzfuzz\n",i);
		}
	}
	
	
	return 0;
}
