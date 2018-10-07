#include<stdio.h>
#define N 7

main(){
	int arr[N];
	printf("Enter any 7 values to Sort:\n");
	for(int l=0;l<N;l++){
		scanf("%d\n",&arr[l]);
	}
	printf("\n\n");
	for(int j=0;j<N;j++){
		printf("%d\t",arr[j]);
	}
		for (int i=0;i<N;i++){
		int value=arr[i];
		int hole=i-1;
		while(hole>=0 && arr[hole]>value)
		{
			arr[hole+1]=arr[hole];
			hole=hole-1;
		}
		arr[hole+1]=value;
	}
	printf("\n\n");
		for(int k=0;k<N;k++){
			printf("%d\t",arr[k]);		
	}
}



