#include<stdio.h>
int main (){
	int mm,yy;
	do {
		
		printf("Moi ban nhap thang: ");
		scanf ("%d",&mm);
		printf ("Moi ban nhap nam: ");
		scanf ("%d",&yy);
		switch(mm){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if (yy>0){
					printf("Nam %d\n",yy);
					printf("Thang %d\n",mm);
					printf("Thang nay co 31 ngay\n");
				} else {
					printf("Khong hop le");
				} 
				break;
			case 4: case 6: case 9: case 11:
				if (yy>0){
					printf("Nam %d\n",yy);
					printf("Thang %d\n",mm);
					printf("Thang nay co 30 ngay\n");
				} else {
					printf("Khong hop le\n");
				}
				break;
			case 2:
				if (yy>100 && yy % 4 == 0 && yy % 100 ==0){
					printf("Nam %d\n",yy);
					printf("Thang %d\n",mm);
					printf("Thang nay co 29 ngay\n");
				} else if (yy>0) {
						printf("Nam %d\n",yy);
					printf("Thang %d\n",mm);
					printf("Thang nay co 28 ngay\n");
				} else {
					printf("Khong hop le\n");
				}
				break;
				default :
			printf("Khong hop le\n");
				
		}
	} while (mm > 12 || mm < 0 || yy <0);
	
	
	return 0;
}
