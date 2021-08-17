#include<stdio.h>
int main(){
	int i,first,last,middle,keysearch,array[50],number;
	printf("enter number of elements\n");
	scanf("%d",&number);
	printf("enter %d integers in ascending order\n",number);
	for (i=0;i<number;i++){
		printf("enter element\n");
		scanf("%d",&array[i]);}
	
		printf("enter value to find\n");
		scanf("%d",&keysearch);
		first=0;
		last=number-1;
		middle=(first+last)/2;
		while(first<=last){
			if(array[middle]<keysearch)
			first=middle+1;
			else if(array[middle]==keysearch){
				printf("%d found at location %d\n",keysearch,middle+1);
				break;
			}
			else 
			last=middle-1;
			
		middle=(first+last)/2;
		}
		if(first>last)
		printf("%d is not found",keysearch);
		return 0;
}
