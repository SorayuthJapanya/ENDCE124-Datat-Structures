#include <stdio.h>
int main() {
    int Dec ;
    printf( "Input your decimal : " ) ;
    scanf("%d", &Dec ) ;
    char Character = (char) Dec ;
    printf( "\nThe character of %d is '%c'", Dec, Character ) ;
    return 0 ;
}//end function
