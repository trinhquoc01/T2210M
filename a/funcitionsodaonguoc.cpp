#include <stdio.h>
int sodaonguoc(int n){	
    int x;
	while(n!=0){
		int sd = n%10;
		x =x*10 + sd;
	    n = n/10;
	}	
	return x;
}
int main(){
	int n;
	int x;
	printf(" n:");
	scanf("%d",&n);
	int a = sodaonguoc(n);
	printf("so dao nguoc cua n là %d",a);
}
