#include <stdio.h>
int main(){
	int arr[10];
	int tongMax=0;
	int tongMin=0;
	printf("Nhap chuoi n: \n");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<10;i++){
		if(arr[i]>=0){
			tongMin=tongMin + arr[i];
		}else{
			if(tongMin>tongMax){
				tongMax=tongMin;
			}
			tongMin=0;
		}
	}
	
	if(tongMin>tongMax){
		tongMax=tongMin;
	}
	if(tongMax==0){
		printf("Mang khong chua so nguyen duong");
	}else{
		printf("Tong so nguyen duong lon nhat la: %d",tongMax);
	}
	
}
