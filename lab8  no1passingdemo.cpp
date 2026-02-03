#include <stdio.h>

int findMax(int num[]);
void printAr(int myAr[],int arSire);
void addone(int number[], int add[], int sizeNum);

int main() {
	int number[5] = {20,50,100,199,9};
	int score[5] = {1, 2, 3, 4, 5};
	int max;

	printAr(number,5);
	printAr(score,5);
	addone(number,score,5);
	printAr(number,5);
}

void printAr(int myAr[], int arSire){
	int i;
	for(i = 0; i < 5;i ++){
		printf("%d ",myAr[i]);
	}
	printf("\n");
	return;
}

void addone(int number[], int add[], int sizeNum){
	int i;
	for(i=0;i<sizeNum;i++){
		number[i] = number[i] + add[i];
	}
	return;
}

int findMax(int num[]) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}

//	printf("number[0] : %d\n",number[0]);
//	printf("number[1] : %d\n",number[1]);
//	printf("number[2] : %d\n",number[2]);
//	printf("number[3] : %d\n",number[3]);
//	printf("number[4] : %d\n",number[4]);
//	printf("Maximum of these number is %d\n",max);
