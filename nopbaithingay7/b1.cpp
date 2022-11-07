#include <stdio.h>
int main(){
	int array[11];
	printf("Enter 10 integers \n");
    for(int i=1;i<=10;i++){
    	printf("a[%i]: ",i);
    	scanf("%d",&array[i]);
	}
	printf("Display in the reversed order \n");
	
	for(int i=10;i>=1;i--){
		printf("%d\n",array[i]);
	}
}
