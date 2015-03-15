#include <stdio.h>
#include <stdlib.h>

void write_something();
int integer_add(int x, int y);
int answer;
void toAscii(char a);

void main(){
    printf("Hello world!\n");
    printf("This is a warning and a new one at that!\n");
    write_something();
    answer = integer_add(3,4);
    printf("%d\n", answer);
    toAscii('a');
    exit(0);
}

void write_something(){
    printf("This is a function . . . i think\n");
}

int integer_add(int x, int y){
    return x + y;
}

void toAscii(char x){
    printf("a in ascii is %d", x);
}
