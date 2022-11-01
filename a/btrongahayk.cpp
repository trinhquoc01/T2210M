#include <stdio.h>
#include <string.h>
int main(){
	char sa[50] , sb[50];
	printf("Nhap chuoi a: ");
	scanf("%s",sa);
	printf("Nhap chuoi b: ");
	scanf("%s",sb);
	if(strstr(sa,sb)==sa){
		printf("Chuoi b nang trong chuoi a");
	} else{
		printf("Chuoi b khong nam trong chuoi a");
	}
}
