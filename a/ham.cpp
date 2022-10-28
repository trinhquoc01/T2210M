#include <stdio.h>
int timMax(int arr[],int n){
	int h = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>h){
			h = arr[i];
		}
	} return h;
}
