#include<stdio.h>

int main(){
	int chuso = 0;
	int chucai = 0;
	int dacbiet = 0;
    char str[100];
 
    printf("Vui long nhap chuoi gia tri can kiem tra :");
    fgets(str, sizeof(str),stdin);
    
    int size= strlen(str);
    
    for(int i = 0;i < size; i++){
      if(isdigit(str[i])){
           chuso++;
      }
    }
    printf("So ki tu chu so la %d", chuso);

    for(int i = 0;i < size; i++){
      if( isalpha(str[i])){
           chucai++;
      }
    }
    printf(" \nSo ki tu chu cai la %d", chucai);
    
	dacbiet = size - chucai - chuso;
	
	printf("\nSo ki tu dac biet la %d", dacbiet);
	
	printf("\nsize %d", size);
	
	
	return 0;
}
