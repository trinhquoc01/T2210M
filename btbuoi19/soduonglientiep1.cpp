#include <stdio.h>
int main(){
	int arr[10];
	int tongMax=0;
	int vitriMax;
	int tongMin=0;
	int vitriMin;
	int vitri;
	printf("Nhap chuoi n: ");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<10;i++){
		if(arr[i]>=0){
			if(tongMin==0){
				vitriMin=i;
			}
			tongMin++;
		}else{
			if(tongMin>tongMax){
				tongMax=tongMin;
				vitriMax=vitriMin;
			}
			vitriMin=0;
			tongMin=0;
		}
	}
	
	if(tongMin>tongMax){
		tongMax=tongMin;
		vitriMax=vitriMin;
	}
	
	
	if(tongMax==0){
		printf("Mang khong chua so nguyen duong");
	}else{
		printf("Tong so nguyen duong lien tiep nhieu nhat la: %d",tongMax);
		printf("\nDay do la: ");
		for(int i=0;i<tongMax;i++){
			vitri=vitriMax + i;
			printf("%d ",arr[vitri]);
		}
	}
	
}
