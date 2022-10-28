#include <stdio.h>
int main(){
	int ary[10];
	for(int i=0;i<10;i++){
		scanf("%d",&ary[i]);
	}
	int high = ary[0];
	
	for(int i=0;i<10;i++){
		if(ary[i] > high){
			high = ary[i];
		}
	}
	printf("Max : %d\n",high);
}

