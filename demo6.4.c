#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float x1,x2,x,dt;
	printf("Moi ban nhap so a: ");
	scanf("%f",&a);
	printf("Moi ban nhap so b: ");
	scanf("%f",&b);
	printf("Moi ban nhap so c: ");
	scanf("%f",&c);
	if (a == 0){
		if (b==0){
		if (c == 0)	{
			printf ("Phuong trinh vo so nghiem");
		} else { printf("Phuong trinh vo nghiem");
		}
			
		} else {
			x = -c / b;
			printf("Phuong trinh bac nhat co 1 nghiem don x = %.2f",x);
		}	
	} else {
		dt = b * b  -4 * a * c;
		if (dt == 0){
			x1 = -b / (2*a);
			x2 = -b / (2*a);
			printf("Phuong trinh co 2 nghiem kep bang nhau\n");
			printf("x1 = x2 = %.2f",x1);
		} else if (dt > 0){
			x1 = (-b + sqrt(dt)) / (2*a );
			x2 = (-b - sqrt(dt)) / (2*a);
			printf("Phuong trinh co hai nghiem kep phan biet\n");
			printf("x1 = %.2f\n",x1);
			printf("x2 = %.2f\n",x2);
		} else {
			printf ("Phuong trinh vo ngiem");
		}
	}
	return 0;
}
