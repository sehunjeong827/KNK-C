#include<stdio.h>
#define MAX_DIGITS 10
int segments_array[10][7]={{1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1,},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
char digits_array[3][4*MAX_DIGITS]; //reference segment for Exercise6 in Ch8
void clear_digits_array();  // 3high, 3(width)+ 1(blank) = 4width --> [3][4]
void process_digit(int,int);
void print_digits_array();
int main(){
        char ch;
        int i;
        clear_digits_array();
        printf("Enter a number: ");
        for(i=0;i<MAX_DIGITS;i++){
                scanf("%c",&ch);
                if(ch == '\n') break;
                if(ch>=48&&ch<=57)
                        process_digit((int)ch-48,i);
                else i--;
        }
        if(i == MAX_DIGITS){
                printf("Over 10\n");
                return 0;
        }
        print_digits_array();
        return 0;
}
void clear_digits_array(void){
        for(int i=0;i<3;i++)
            for(int j=0;j<4*MAX_DIGITS;j++)
                digits_array[i][j] = ' ';
}
void process_digit(int digit,int position){
        if(segments_array[digit][0]) digits_array[0][1+4*position] = '_';
        if(segments_array[digit][1]) digits_array[1][2+4*position] = '|';
        if(segments_array[digit][2]) digits_array[2][2+4*position] = '|';
        if(segments_array[digit][3]) digits_array[2][1+4*position] = '_';
        if(segments_array[digit][4]) digits_array[2][0+4*position] = '|';
        if(segments_array[digit][5]) digits_array[1][0+4*position] = '|';
        if(segments_array[digit][6]) digits_array[1][1+4*position] = '_';
}
void print_digits_array(void){
        printf("\n");
        for(int i=0;i<3;i++){
                for(int j=0;j<4*MAX_DIGITS;j++){
                        printf("%c",digits_array[i][j]);
                }
        printf("\n");
        }
}