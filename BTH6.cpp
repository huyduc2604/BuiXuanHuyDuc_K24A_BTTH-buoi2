#include <stdio.h> 

int isPrime(int n){
	if(n<2)	return 0; 
	for(int i = 2; i*i <=n; i++){
		if(n % i == 0) return 0; 
	}
	return 1; 
} 

int main(){
	int n;
		printf("Moi nhap vao mot so nguyen duong n: ");
		scanf("%d",&n);
	while(n){
		int p;
		if(isPrime(p)){
			printf("%d ",p) ;
			n--; 
		} 
		++p; 
	} 
} 
