#include <stdio.h>
int main() {
	int n ;
	char b ;
	scanf("%c %d" , &b , &n) ;
	for ( int i = 0 ; i < n ; i++) {   
		for( int j = 0 ; j < n ; j++) {
			printf("%c" , b);
		}
		printf("\n") ;

	}
	return 0 ;
}
