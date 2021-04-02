#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <conio.h>
/*
Y tuong them:
	-Trong muc menu thay vi chi cho tim kiem bang the loai thi co the tim kiem bang ten
	VD: Go "T" thi se list ra danh sach nhung cuon sach co chu T dau tien trong ten
*/
struct book_st{
	char TenSach[30]; 
	char TenTacGia[100];
	char TheLoai[30]; 
	int NamXuatBan;
	int GiaTien;
	};
	typedef book_st Sach;
void trangtri()
{
    int i;
    for (i=0;i<=100;i=i+2) {
        system("cls");
        printf("\n\t\t\t    Dang tai chuong trinh");
       	printf("\n\n\t\t__________________________________________");
        printf("\n\n\t\t\t\t\Loading %d % ", i); 
        Sleep(35);
 }
// 	printf("\n\n\t\t\t\t\tMot san pham cua An ft T-Team.");
 	Sleep(2000);
}

void NhapThongTinSach(Sach &s1){
	fflush(stdin);
	printf("Nhap ten sach: ");
	gets(s1.TenSach);
	fflush(stdin);
	printf("Nhap ten tac gia: ");
	gets(s1.TenTacGia);
	printf("Nhap nam xuat ban: ");
	scanf("%d",&s1.NamXuatBan);
	fflush(stdin);
	printf("Nhap the loai: ");
	gets(s1.TheLoai);
	printf("Nhap gia tien: ");
	scanf("%d", &s1.GiaTien);
		
}
void NhapSoLuong(book_st s1[], int n){
	for (int i=0;i<n;i++){
		printf("%d: \n",i+1);
		NhapThongTinSach(s1[i]);
	}
}
void XuatThongTinSach(book_st s1){
		printf("\n\t\t\t ");
	printf("\tTen sach: %s\n",s1.TenSach );
		printf("\n\t\t\t ");
	printf("\tTen tac gia: %s\n", s1.TenTacGia);
		printf("\n\t\t\t ");
	printf("\tNam xuat ban: %d\n",s1.NamXuatBan);
		printf("\n\t\t\t ");
	printf("\tThe loai: %s\n",s1.TheLoai);
		printf("\n\t\t\t ");
	printf("\tGia tien: %d\n",s1.GiaTien);
}

void XuatDS(book_st s1[], int n){
	for(int i=1; i<=n;i++){
		printf("\n\t\t\t ");
		printf("\n      ~Thong tin cuon thu %d~ \n", i);
		XuatThongTinSach(s1[i]);
	}
}
void KiemTra(){
	//int n;
	char c;
	if(scanf("%c", &c) == 2 || c == '\n'){
		Sleep(100);
		};
	else{
		printf("\t\t\t\t");
		printf("Vui long nhap lai!");
		Sleep(2000);
		system("cls");
	}
}s
void Menu(){
	int flat=1;
	char chon;
	while(flat){
		printf("_____________________________w_QUAN LY THU VIEN_w________________________________");
		printf("\n-------------------------------------MENU-------------------------------------");
		printf("\n\t\t\t ");
		printf("1. Nhap  thong tin sach.\n");
		printf("\t\t\t ");
		printf("2. Thong tin sach.\n");
		printf("\t\t\t ");
		printf("3. Tim sach theo the loai.\n");
		printf("\t\t\t ");
		printf("4. Ghi vao tap tin book.dat.\n");
		printf("\t\t\t ");
		printf("5. Thoat.\n");
		printf("============================Moi ban chon chuc nang============================");
		printf("\n\t\t\t\t       ");
		scanf("%d", &chon);
		KiemTra();
		switch(chon){
			case 1: 
				struct book_st a[100];
				int n;
				printf ("\t\t      So cuon sach can nhap thong tin:  ");
				scanf ("%d",&n);
				NhapSoLuong(a,n);
				printf("\n\t\t\t    ");
				printf("Da nhap xong thong tin sach!");
				Sleep(3000);
				system("cls");
				break;
			case 2:
				system("cls");
				printf("\n\t\t\t\t ");
				printf("Thong tin sach: \n");
				XuatDS(a,n);
				printf("\nNhan phim bat ki de tiep tuc");
				getch();
				system("cls");
				break;
			case 3://dung so sanh chuoi 
			case 4:
			case 5:
				flat=0;		
		}
	}
}
int main(){
//	trangtri();	
	system("cls");
	Menu();
}
