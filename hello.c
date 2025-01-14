#include <stdio.h> 
int main(){
	int userNum;
	printf("Please enter an integer number: ");
	scanf("%d", &userNum);
	int doubleUserNum = userNum * 2;
	int tripleUserNum = userNum * 3;
	printf("Hi, you entered %d. Double and triple of %d is %d and %d respectively",userNum, userNum, doubleUserNum, tripleUserNum);
}


