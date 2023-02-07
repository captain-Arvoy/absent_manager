#include <stdio.h>

int main(){
	int x[] = {2,3,1,3,2,1,1};//fetch from database, how many classes you attended
	int c2 = 0;
	int y = 0;
	float attendancePercentage;
	int yarr[] = {5,5,3,5,4,3};
	for (int i = 0; i < 7; i++){
		int c = yarr[i];//daily total classes
		c2 = c2 + x[i];
		y = y + c;//adding to previous classes 
		attendancePercentage = (((float)c2)/((float)(y + c)));
		printf("numerator=%d\nattendancePercentage=%f",c2,attendancePercentage*100.0);
		printf("\n");
	}
}
