#include <stdio.h>
int main() {
	int Num, i, cal ;
	int binary = 0, n = 1 ;
	printf( "Input your number : " ) ;
	scanf( "%d", &Num ) ;
	i = Num ;
	while( i > 0 ) {
		cal = i % 2 ;
		binary = binary + ( cal * n ) ;
		n = n * 10 ;
		i = i / 2 ;
	}
//	for( i = Num ; i > 0 ; i = i / 2 ) {
//		cal = i % 2 ;
//		binary = binary + ( cal * n ) ;
//		n = n * 10 ;
//	}//end for
	printf( "\nBinary of number %d is %d", Num, binary ) ;
	return 0 ;
}//end function
