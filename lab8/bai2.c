#include<stdio.h>
#include<conio.h>
struct SinhVien
{
	char mssv[20];
	char tenSV[20];
	char nganhHoc[50];
	float diemTB;
};

int main()
{
	int i,j,n;
	printf("Nhap so sinh vien muon them: ");
	scanf("%d", &n);
	struct SinhVien nhomSV[n];
	//input
	for ( i = 0; i < n; i++)
	{
		printf("Nhap ma so sinh vien: ");
		fflush(stdin);
		gets(nhomSV[i].mssv);
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(nhomSV[i].tenSV);
		printf("Nhap nganh hoc: ");
		fflush(stdin);
		gets(nhomSV[i].nganhHoc);
		printf("Nhap diem trung binh: ");
		scanf("%f", &nhomSV[i].diemTB);
		
    }

    //sort
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (nhomSV[i].diemTB > nhomSV[j].diemTB)
            {
                struct SinhVien svTemp;
                svTemp = nhomSV[i];
                nhomSV[i] = nhomSV[j];
                nhomSV[j] = svTemp;
            }
            
        }
        
    }
    
    
	//output
	for ( i = 0; i < n; i++)
	{
		printf("\n");
		printf("\nMa so sinh vien: %s", nhomSV[i].mssv);
		printf("\nTen sinh vien: %s", nhomSV[i].tenSV);
		printf("\nNganh hoc: %s", nhomSV[i].nganhHoc);
		printf("\nDiem trung binh: %.2f", nhomSV[i].diemTB);
	}
	
	
	_getch();
	return 0;
}
