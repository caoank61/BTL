//man hinh loading
#include<stdio.h>
#include<windows.h>
void trangtri()
{
    int i;
    for (i=0;i<=100;i=i+2) {
        system("cls");
        printf("\n\t\t\t    Dang tai chuong trinh");
       	printf("\n\n\t\t__________________________________________");
        printf("\n\n\t\t\t\t\Loading %d % ", i); 
        Sleep(50);
 }
 	Sleep(1000);
}
int main(){
	trangtri();

}
