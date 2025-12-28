#include <stdio.h>
int main() {
	int n ,score[100];
	scanf("%d" ,&n) ;
	for ( int i = 0 ; i < n ; i++) {
		scanf("%d" , &score[i]);

	}
	for( int i = 0 ; i < n ; i++) {

		if(score[i] > 100){
			printf("error score") ;
		}
        else if (score[i] >= 85)
		printf("%d(A)", score[i]);
		else if (score[i] >= 75)
		printf("%d(B)", score[i]);
		else if (score[i] >= 68)
		printf("%d(C)", score[i]);
		else if (score[i] >= 55)
		printf("%d(D)", score[i]);
		else if (score[i] < 0)
		printf("error score") ;
		else printf("%d(F)", score[i]);
		printf("\n") ;

	}
	
	return 0 ;
}
