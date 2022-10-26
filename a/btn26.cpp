#include <stdio.h>
#include <math.h>
int chuvitamgiac(int a,int b,int c){
	int p = a + b + c;
	return p;
}
float dientichtamgiac(int a, int b, int c){
	int p = a + b + c;
	int q = p/2;
	int s = (float)sqrt(q*(q-a)*(q-b)*(q-c));
	return s;
}


int tongchusotrongn(int n){
	int x;
	int sd;
	while(n>0){
		sd=n%10;
		x+=sd;
		n=n/10;
	}
	return x;
	
}


int uocchung(int a,int b){
	while(a*b != 0){
		if (a > b){
            a %= b;
        }else{
            b %= a;
        }
	}
	return a+b;
}

bool sochinhphuong(int n){
	int i;
	while(i*i<n){
		if(i*i==n){
			return true;
		}
		return false;
	}
}


int timsonguyenduongmin(int n){
	int S;
	while(S<10000){
		n++;
		S=S+n;
	}
	return n;
}


bool ktchuso(int n){
	int tMin=n%10;
	n=n/10;
	while(n>0){
		int t = n%10;
		if(t<=tMin){
			return false;
		}
		tMin = t;

        n = n / 10;
    }
    return true;
}


