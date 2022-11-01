#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	int nguyenam = 0, amkhac =0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==97 || s[i]== 65 || 
		   s[i]==101 || s[i]==69 ||
		   s[i]==105 || s[i]==73 ||
		   s[i]==111 || s[i]==79 ||
		   s[i]==117 || s[i]==85 ){
		   	nguyenam++;
		   }
		   else{
		   	amkhac++;
		   }
	}
	printf("\nSo luong nguyen am la: %d",nguyenam);
	printf("\nSo luong am khac la: %d",amkhac);
}
