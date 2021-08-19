#include <stdio.h>

void check_number(int n){
	
	for(int i=1; i<=n; i++){
		if((i/10==3 || i/10==6 || i/10==9) && (i%10==3 || i%10==6 || i%10==9)){
			printf("=============================\n");
			printf(" 짝 ! 짝 ! \n");
			
		}else if((i/10==3 || i/10==6 || i/10==9) || (i%10==3 || i%10==6 || i%10==9)){
			printf("=============================\n");
			printf(" 짝 ! \n");
			
		}else {
			printf("=============================\n");
			printf(" %d \n", i);
		}
		
		getchar();


	}
}

int main() {  
	printf(" [+] 펭귄이와 삼육구(369) \n");
	check_number(300);
	
}