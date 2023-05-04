#include<stdio.h>

void in_lua_chon() {
	printf("\n_________________________________") ;
	printf("\n|             MENU              |");
	printf("\n|1. Tinh trung binh             |");
	printf("\n|2. Xac dinh so nguyen to       |");
	printf("\n|3. Kiem tra so chinh phuong    |");
	printf("\n|4. Xac nhan thoat              |");
	printf("\n|_______________________________|\n") ;
}


void bai_1 () {
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
		printf("%d\n", i) ;
 		tong += i;
	 	dem++;     
 	}
 	i++; 
}
avg = tong/dem;
printf("trung binh cong cac so chia het cho 2: %d\n", avg); 

}

void bai_2(){

    int x;
    int count = 0;
    int i;
    printf("\nNhap x = ");
    scanf("%d", &x);
    for (i = 2; i < x; i++) {
        if (x % i == 0) { count++; }
    }
    if (count == 0) {
        printf("x la so nguyen to  \n");
    } else {
        printf(" x khong phai la so nguyen to \n");
    }
}
void bai_3(){
	int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            printf("%d la so chinh phuong!\n", n);           
        }
        ++i;
    }
    printf("%d khong phai so chinh phuong!\n", n);
} 

int bai_4() {
	char xac_nhan;
	do
	{
		printf("Ban co chac chan khong (Y/n)? ");
		scanf("%c", &xac_nhan);
		switch(xac_nhan) {
			case 'Y': {
				return 1; 
			}
			case 'n': {
				return 0; 
			}
			default: {
				printf("Lua chon khong hop le. Moi nhap lai (Y/n)!\n ");
				break;
			}
		}
	}while(1);
		fflush(stdin);
}

int main(){
	char lua_chon;
	do {
		in_lua_chon();
		printf("\nNhap lua chon: ");
		scanf(" %c", &lua_chon);
		switch(lua_chon) {
			case '1': bai_1(); 
				break;
			case '2': bai_2(); 
				break;
			case '3': bai_3(); 
				break;
			case '4':
				if(bai_4() ==1 ){ 
					return 0;
				}
				break;
			default: {
				printf("Lua chon khong hop le. Moi nhap lai!\n");
				break;
			}
		}
	} while(1);
}
