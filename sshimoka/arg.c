#include <stdio.h>

int myatoi(char *str) {
    int num = 0;


    while(*str != '\0'){
		if(*str != ' '){
        num += *str - 48;
        num *= 10;
        str++;}
    }

    num /= 10;

    return num;
}

int main (int argc, char const *argv[])
{
	printf("%s", argv[1]);

    // printf("%d\n",myatoi(argv[1]));

    return 0;
}