#include<stdio.h>
int main(){
	int chan=0, le=0, num, i;
	for(i=1;i<6;i++){
		printf("Moi ban nhap so nguyen: ");
		scanf("%d",&num);
		if (num % 2 == 0){
			chan++;
		} else {
			le++;
		}
	} printf ("Tong so chan la: %d\n",chan);
	printf("Tong so le la: %d\n",le);
	
	return 0;
}
