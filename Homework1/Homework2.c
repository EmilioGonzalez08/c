/* This Homework was done with Angela Gabriela Pesina de los Santos´s help, and some other partners that 
explained to me in detail step by step each part of the homework
we also used the teacher´s work in base */

#include <stdio.h>
#include <math.h>

#define K 15  
void primo (int n);
void binary (int j);

int main (){
	primo(K); 
	return 0;
}

void binary(int j) {
	int i = 0; 
	int base[9]={0}; 
	int num = j;
	int x;

	
		while (num>0) {
		base[i]=num%2; 
		num/=2;
		++i; 
	}

	

	for (x = 8; x >= 0; --x) {
		printf("%01d", base[x]);
	}
	printf("\n");
}

void primo (int k) {
	int co, i, warn, sr;
	int n = 1;
	co = 1;

	while (co <= k){
		sr = sqrt (n);
		warn = 0;  

		for (i = 2; i <= sr; i++){
			if (n%i == 0){
				warn = 1;
				break;
			}
		}

	if (warn == 0) { 
	binary(n); 
	co++; 
	}
	n++; 
		}


}
