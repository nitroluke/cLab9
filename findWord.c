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

int * findWord(char charArr[arrSize][arrSize], int arrIndex, char searchFor[3]){
/* char foundWord[arrSize] = "   "; */
int arrI = 0;
int arrJ = 0;
int true = 1;
int false = 0;
int hasWord = false;
/* int wordCoordI = 0;
int wordCoordJ = 0; */


/* for(arrI; arrI < arrSize; arrI++){
	for(arrJ; arrJ < arrSize;){
	
	if(!hasWord){
	hasWord = true;
	arrJ = 0;
	// make wordCoord -1, -1 because a word was not found
	break;
	}
	else if(charArr[arrI][arrJ] == str1[arrJ]){
	 arrJ++;
	}
	else if(arrJ = (arrSize - 1)){
	
	}
	}
	wordCoordI++; //put this and wordCoordJ into addressArr[] because a word was found somehow
} */
if(hasWord){
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
else{
addressArr[0] = -1;
addressArr[1] = -1;
}

return addressArr;
}