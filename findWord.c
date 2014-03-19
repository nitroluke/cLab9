/*
Luke Welna
in lab 9
3-18-14
*/

#include <findWord.h>
#include <stdio.h>
#include <stdlib.h>
int arrSize = 3;
static int addressArr[2];

int main(){


return 0;
}


int * findWord(char charArr[arrSize][arrSize], char searchFor[3]){

int arrI = 0;
int arrJ = 0;
int true = 1;
int false = 0;
int hasWord = false;

if(!hasWord){
addressArr[0] = -1;
addressArr[1] = -1;
for(arrI; arrI < arrSize; arrI++){ // search for horizontal words words.
	if(charArr[arrI][0] == searchFor[0]){
		if(charArr[arrI][1] == searchFor[1]){
			if(charArr[arrI][2] == searchFor[2]){
			addressArr[0] = charArr[0][arrI];  // the word exists
			hasWord = true; // set hasWord = to true
			}
		}
	}
}
for(arrJ; arrJ < arrSize; arrJ++){
	if(charArr[0][arrJ] == searchFor[0]){
		if(charArr[1][arrJ] == searchfor[1]){
			if(charArr[2][arrJ] == searchFor[2]){
			addressArr[1] = charArr[arrJ][0]; // the word is vertical
			hasWord = true; // set hasWord = true
			}
		}
	}
}
}


return addressArr;
}