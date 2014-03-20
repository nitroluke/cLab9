
#include "findWord.h"
#include <stdio.h>
#include <stdlib.h>

int coordX = -1;
int coordY = -1;
char searchFor[4];

int main(){
char charArr[3][3] = {{'s','e','t'},{'a','r','e'},{'t','e','n'}};
puts("If it prints '____ found at (-1,-1)', the word was not found");

findWord(charArr, "set", &coordX, &coordY);
printf("set found at (%i,%i)\n",coordX,coordY);

findWord(charArr, "sat", &coordX, &coordY);
printf("sat found at (%i,%i)\n",coordX,coordY);

findWord(charArr, "ere", &coordX, &coordY);
printf("ere found at (%i,%i)\n",coordX,coordY);

findWord(charArr, "ten", &coordX, &coordY);
printf("ten found at (%i,%i)\n",coordX,coordY);

findWord(charArr, "axe", &coordX, &coordY);
printf("axe found at (%i,%i)\n",coordX,coordY);

return 0;
}