/*
Luke Welna
in lab 9
3-18-14
*/

#include <stdio.h>
#include <stdlib.h>

void findWord(char charArr[3][3], char searchFor[3],int* coordX,int* coordY){
int arrI = 0;
int arrJ = 0;
*coordX = -1;
*coordY = -1;
for(arrI; arrI < 3; arrI++){ // search for horizontal words words.
	if(charArr[arrI][0] == searchFor[0]){
		if(charArr[arrI][1] == searchFor[1]){
			if(charArr[arrI][2] == searchFor[2]){
			int foundCoord = arrI;
			*coordX = foundCoord;
			*coordY = 0;
			}
		}
	}
}
for(arrJ; arrJ < 3; arrJ++){
	if(charArr[0][arrJ] == searchFor[0]){
		if(charArr[1][arrJ] == searchFor[1]){
			if(charArr[2][arrJ] == searchFor[2]){
			int foundCoord = arrJ;
			*coordY = foundCoord;
			*coordX = 0;
			}
		}
	}
}
}