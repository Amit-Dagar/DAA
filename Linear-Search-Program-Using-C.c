#include<stdio.h>

void main(){
	int ary[100],num,length,counter;
	
	printf("Enter Length of array elements: ");
	scanf("%d",&length);
	
	printf("Enter array %d array elements: ",length);
	for(counter=0;counter<length;counter++){
		scanf("%d",&ary[counter]);
	}
	
	printf("\nEnter element to search: ");
	scanf("%d",&num);
	
	for(counter=0;counter<length;counter++){
		if(num==ary[counter]){
			printf("Element %d found in array at position %d.",num,counter);
		}else{
			printf("Element %d not found in array.",num);
		}
	}
	getch();
}
