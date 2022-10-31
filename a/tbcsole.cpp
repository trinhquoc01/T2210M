#include <stdio.h>
float tbcle(int ary[],int n){
	int i;
	float s = 0;
	float d = 0;
	float tbc ;
	for(i=0;i<n;i++){
		if(ary[i]%2 !=0){
			s=s+ary[i];
			d++;
		}
	}
	tbc=s/d;
	return tbc;
}
int main(){
	int n = 7;
	int ary[] = {1 , 2 , 5 ,7 ,9 ,11 ,13};
	float tbc = tbcle(ary,n);
	printf("Trung binh cong cac so le trong mang so %f la:",tbc);
}
