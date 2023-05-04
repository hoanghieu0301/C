#include <stdio.h> 
int main() {
	int min,max;
	int tong, dem ,avg; 
	printf("nhap min: ");
	scanf("%d", &min) ;
	printf("nhap max: ");
	scanf("%d", &max) ;
	int i =min; 
	tong = dem = 0;
	while( i <= max){
	if (i % 2 == 0){
		printf("%d", i) ;
 		tong += i;
	 	dem++;     
 	}
 	i++; 
}
avg = tong/dem;
printf("trung binh cong cac so chia het cho 2: %d", avg); 
return 0; 
} 
