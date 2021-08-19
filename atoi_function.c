#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {   
  
	char input_string[10];
	
	printf("[+] 문자열을 숫자로 변환하는 프로그램 \n");
	printf("문자열을 입력하세요. \n");
	printf("> ");
	scanf("%s", input_string);
	printf("===================================== \n");
	if(input_string[0]>=48 && input_string[0] <=57&& input_string[1]>=48 && input_string[1] <=57 && input_string[2]>=48 && input_string[2] <=57){
		printf("입력한 문자의 아스키 코드는 %d, %d, %d 이며 숫자형으로 변환하면 %d입니다. \n", 
			   input_string[0],input_string[1],input_string[2], atoi(input_string));
	}else{
			printf("입력한 문자의 아스키 코드는 %d, %d, %d 이며 숫자로 변환할 수 없는 문자열입니다. \n", 
			   input_string[0],input_string[1],input_string[2]);
		}
	
	return 0;
	
}