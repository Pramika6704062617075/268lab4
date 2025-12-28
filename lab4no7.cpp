#include <stdio.h>
int main() {
	char b ;
	int n1 , n2 ;
	scanf("%c %d %d" , &b , &n1 , &n2) ;
	for ( int i = 0 ; i < n2 ; i++) {   
		for( int j = 0 ; j < n1 ; j++) {
			printf("%c" , b);
		}
		printf("\n") ;
	}
	return 0 ;
}


