#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int organize(int* organized){
	int i,storage;
	for(i=0;i<10;i++){
		if(organized[i]>organized[i+1]){
			storage=organized[i];
			organized[i]=organized[i+1];
			organized[i+1]=storage;
			return 0;
		}
	}
	return 1;
}
int main(){
	int unorganized[10],organized[10];
	srand(time(NULL));
	int i,isOrganized=0;
	for(i=0;i<10;i++){
		unorganized[i]=rand()%10;
		organized[i]=unorganized[i];
	}
	while(isOrganized==0){
		isOrganized=organize(organized);
	}
	printf("Unorganized:\n");
	for(i=0;i<10;i++){
		printf("%d\n",unorganized[i]);
	}
	printf("Organized:\n");
	for(i=0;i<10;i++){
		printf("%d\n",organized[i]);
	}
}