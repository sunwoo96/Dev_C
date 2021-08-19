#include <stdio.h>

int main() {   
  
	char initial1 = 'K';
	char initial2 = 'P';
	char initial3 = 'G';
	
	int age = 15;
	double height = 131.97;
	double weight = 37.63;
	
	char blood_type = 'B';
	int foot_number= 3;
	int amount_eat_fish = 99;
	
	if(age >0 && height>0 && weight >0 && amount_eat_fish >0){
	printf("[+] 펭귄 신원 확인 프로그램(v.1.3.7) \n");
	printf("    나이: %d(세) \n", age);
	printf("    이름: %c,%c,%c \n", initial1, initial2, initial3);
	printf("    신장: %lf(cm) \n", height);
	printf("    몸무게: %lf(kg) \n", weight);
	printf("    혈액형: %c(형) \n", blood_type);
	printf("    발가락 개수: %d(개) \n", foot_number);
	printf("    하루에 먹는 양미리 양: %d(마리) \n", amount_eat_fish);
	
	printf("================================================ \n");
	printf("[+] 펭귄 ""'K.P.G'""님이 신원 정보에 추가 되었습니다.\n");
	}else{
		printf("[!] 잘못된 정보입니다. \n");
	}

	return 0;
}