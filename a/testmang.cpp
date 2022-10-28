#include <stdio.h>
int main(){
    int ary[10];
    int i, total, high;
    for(i=0; i<10; i++)
    {
	 scanf("%d",&ary[i]);
    }
   
    high = ary[0];
    for(int i=1; i<10; i++)
    {
        if(ary[i] > high)
            high = ary[i];
    }
    printf("\nHighest value entered was %d", high);
}

