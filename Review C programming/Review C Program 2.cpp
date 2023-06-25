#include <stdio.h>
int main() {
	int Num, i, cal ;
	int binary = 0, n = 1 ;
	printf( "Input your number : " ) ;
	scanf( "%d", &Num ) ;
	i = Num ;
	while( i > 0 ) {
		cal = i % 10 ;
		binary = binary + ( cal * n ) ;
		n = n * 2 ;
		i = i / 10 ;
	}
	printf( "\nBinary of number %d is %d", Num, binary ) ;
	return 0 ;
}//end function
