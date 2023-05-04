#include <stdio.h>
#include <math.h>

int main() {
	int chon;
	printf(" ________________________________\n");
	printf("|    Chuong trinh Demo menu     |\n");
	printf("|1.Hoc luc                      |\n");
	printf("|2.Phuong trinh bac 1           |\n");
	printf("|3.Phuong trinh bac 2           |\n");
	printf("|_______________________________|\n");
	printf("ban chon so tu 1-3 tuong ung de thuc hien: ");
	scanf("%d",&chon) ;
	switch(chon) {
		case 1: printf(" ban chon tim hoc luc\n");
			float diem;
      
      printf("Moi nhap diem cua sinh vien: ");
      scanf("%f", &diem);
      if(diem>=9) {
            printf("Hoc luc xuat sac");
      }else if(diem>=8) {
            printf("Hoc luc gioi");
      }else if(diem>=6.5) {
            printf("Hoc luc kha");
      }else if(diem>=5) {
            printf("Hoc luc trung binh");
      }else if(diem>=3.5) {
            printf("Hoc luc yeu");
      }else
      printf("Hoc luc kem");
      return 0;
		break; 
	
		case 2: printf(" ban chon giai phuong trinh bac 1\n");
		float a,b;
		 printf("\nNhap he so a: ");
		  scanf("%f",&a); 
		  printf("\nNhap he so b: ");
		   scanf("%f",&b); 
		   if (a==0) { //n?u a==0 th? if (b==0) { //n?u b==0 th?
			printf("\nPhuong trinh vo so nghiem"); 
			printf("\nPhuong trinh ve nghiem");
			}else
 			printf("\nPhuong trinh co nghiem x: %f",-b/a);
			return 0;
		break; 
		
		
		case 3: printf(" ban chon giai phuong trinh bac 2\n");
		float x1;
		float x2;
		float delta;
	
		float c;
		printf("\nNhap he so a: ");
		scanf("%f",&a); 
		printf("\nNhap he so b: ");
		scanf("%f",&b); 
		printf("\nNhap he so c: ");
		scanf("%f",&c);
	
	if (a==0){
		printf("\nHe so a phai khac 0");
	}else{
		// a !=0
		delta = pow(b, 2)-4*a*c;
		printf("\ndelta = %.2f", delta);
		
		if (delta>0){
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			printf("\nPhuong trinh co nghiem phan biet: x1=%.2f va x2=%.2f", x1, x2);
		}else if(delta==0){
			x1 = -b/(2*a);
			printf("\nPhuong trinh co nghiem kep x1=x2=%.2f", x1);
		}else{
			printf("\nPhuong trinh vo nghiem");
		}
		break; 
	}
	return 0; 
}
}

