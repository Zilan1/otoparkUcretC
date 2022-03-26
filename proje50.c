#include <stdio.h>
#include <stdlib.h>

int main() {

    int saat;

    printf("Otoparkta Kac Saat Kaldiniz: ");
    scanf("%d",&saat);
   
    if(saat>0 && saat<=4)
    {
    	printf("Odeme Tutariniz 10 TL");
	}
  
    if(saat>=5 && saat<=8)
    {
    	printf("Odeme Tutariniz 12 TL");
	}

    if(saat>=9 && saat<=12)
    {
    	printf("Odeme Tutariniz 15 TL");
	}

    if(saat>=13 && saat<=20)
    {
    	printf("Odeme Tutariniz 20 TL");
	}





	return 0;
}
