#include<stdio.h>


int main (){
	int n;
	printf ("Enter the number of elements: ");
	scanf ("%d", &n);
	
	printf ("Enter %d number: \n");
	int i;
	for (i = 0; i < n; i++) {
		int num;
		scanf ("%d", &num);
		
		if(num % 2 == 0){
			printf("i divisible by 2. \n", num);
		}
		if(num % 3 == 0){
			printf("i divisible by 3. \n", num);
		}
		if(num % 5 == 0){
			printf("i divisible by 5. \n", num);
		}
	}
	return 0;
}
