#include<stdio.h>
//void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 


int main() {
	int a[3] = {1,2,3}, b[3] = {2,3,4}, c[3] = {3,4,5};
	int i;
	printf("Before Swap Array = a[3] = ");
	for(i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	printf(" , b[3] = ");
	for(i=0;i<3;i++){
		printf(" %d",b[i]);
	}
	printf("\n");
	swapArray(a,b,3);
}

void swapArray(int a[],int b[],int size){
	int i,swap;
	for(i=0;i<size;i++){
		swap = a[i];
		a[i] = b[i];
		b[i] = swap;
	}
	printf("After Swap Array : a[3] = ");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf(" , b[3] = ");
	for(i=0;i<size;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
}

