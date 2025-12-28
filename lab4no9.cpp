#include <stdio.h>
int main() {
	int score[100];
	int n = 0;
	while (1) {
    scanf("%d", &score[n]);
    if (score[n] == -1) break;
    n++;
}                                                      

	for( int i = 0 ; i < n ; i++) {
		
		printf("%d" , score[i]);
		if(score[i] > 100){
			printf("(error score)") ;
		}
        else if (score[i] >= 85)
		printf("(A)");
		else if (score[i] >= 75)
		printf("(B)");
		else if (score[i] >= 68)
		printf("(C)");
		else if (score[i] >= 55)
		printf("(D)");
		else if (score[i] < 0)
		printf("(error score)") ;
		else printf("(F)");
		printf("\n") ;

}
	
	return 0 ;

}
