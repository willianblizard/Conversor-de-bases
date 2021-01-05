#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cstdlib>
#include<iostream>
#include<string.h>
#include<locale.h>

using namespace std;
int* quebraStringX(char*);
long long ConverterOctalParaDecimal(int OctalNumero);
int decim(int n);
int main(int argc,char *argv[])

{
	setlocale (LC_ALL,"Portuguese");
	int vEscolha;
	while(true){
		printf("menu\n1 - conversão Binario > Decimal.\n2 - conversão Decimal > Binario.\n3 - conversão Octal > Decimal.\n4 - conversão Decimal > Octal.\n5 - conversão Hexadecimal > Decimal\n6 - conversão Decimal > Hexadecimal\n7 - sair\n\nOpcao: ");
		scanf("%d", &vEscolha);
		switch(vEscolha){
			    case 1:
			    	    int bin, dec = 0, i;
                        printf("Digite um número bínario para ser convertido: ");
                        scanf("%d", &bin);
                        for(i = 0; bin > 0; i++)
                        {
                        dec = dec + pow(2, i) * (bin % 10);
                        bin = bin / 10;
                        }
                        printf("Decimal equivalente: %d\n\n", dec);
                        system ("Pause");
                        }
		switch(vEscolha){
        	    case 2:
				        int num;
                        int bin[8];
                        int aux;
                        printf("Digite um número decímal para ser convertido: ");
                        scanf("%d", &num);
                        for (aux = 7; aux >= 0; aux--)
                        {
                        if (num % 2 == 0)
                        bin[aux] = 0;
                        else
                        bin[aux] = 1;
                        num = num / 2;
                        }
                        printf("Equivalente em binario: \n\n");
                        for (aux = 0; aux < 8; aux++)
                        {
                        printf("%d", bin[aux]);
                        }
                        system ("\n\nPause");
                        
                        }
        switch(vEscolha){
        	    case 3:
        	            int OctalNumero;
        	            printf("Insira um número em Octal: ");
                        scanf("%d", &OctalNumero);
                        printf("%d Em octal = %lld em Decimal \n\n", OctalNumero, ConverterOctalParaDecimal(OctalNumero));
                        system ("Pause");
		                }
		switch(vEscolha){
			    case 4:
			    	    {
                        int n,octal;
                        printf("Digite um numero decimal:");
                        scanf("%d",&n);
                        octal=decim(n);
                        printf("O equivalente em octal é: %d\n\n",octal);
                        system ("Pause");
                        }
		                }
		switch(vEscolha){
			    case 5:
			    	    system ("cls");
                        char hex[17];
                        long long decimal, place;
                        int i = 0, val, len;
                        decimal = 0;
                        place = 1;
                        printf("Insira um número em Hexadecimal: ");
                        cin >> hex;
                        len = strlen(hex);
                        len--;
                        for(i=0; hex[i]!='\0'; i++)
                        {
                        if(hex[i]>='0' && hex[i]<='9')
                        {
                        val = hex[i] - 48;
                        }
                        else if(hex[i]>='a' && hex[i]<='f')
                        {
                        val = hex[i] - 97 + 10;
                        }
                        else if(hex[i]>='A' && hex[i]<='F')
                        {
                        val = hex[i] - 65 + 10;
                        }
                        decimal += val * pow(16, len);
                        len--;
                        }
                        printf("Número Hexadecimal = %s\n", hex);
                        printf("Número Decimal = %lld \n\n", decimal);
                        system ("Pause");			    	
		                }                
        switch(vEscolha){
			    case 6:
			    	    long int decimalNumber,remainder,quotient;
	                    int i=1,j,temp;
	                    char hexadecimalNumber[100];
	                    printf("Digite um numero decimal: ");
	                    scanf("%ld",&decimalNumber);
	                    quotient = decimalNumber;
	                    while(quotient!=0) {
		                temp = quotient % 16;
		                if( temp < 10)
		                temp =temp + 48; else
		                temp = temp + 55;
		                hexadecimalNumber[i++]= temp;
		                quotient = quotient / 16;
	                    }
	                    printf("Equivalente em Hexadecimal %d: \n\n",decimalNumber);
	                    for (j = i -1 ;j> 0;j--)
	                    printf("%c",hexadecimalNumber[j]);
	                    system ("Pause");
			    	    }
		switch(vEscolha){
				case 7:							           
		                puts("\n\n");
	                    system("PAUSE");
	                    return EXIT_SUCCESS;
	                    }
}
}
long long ConverterOctalParaDecimal(int OctalNumero)
{
    int DecimalNumero = 0, i = 0;

    while(OctalNumero != 0)
    {
        DecimalNumero += (OctalNumero%10) * pow(8,i);
        ++i;
        OctalNumero/=10;
    }

    i = 1;

    return DecimalNumero;
}
int decim(int n)
{
    int i = 1,a;
    int octal = 0;
    if(n<=7) {
        octal=n;
    } 
    else {
        while(n>=8) {
            a=n%8;
            n=n/8;
            octal = octal + a * i;
            i*= 10;
        }
        n=n%8;
        octal = octal + n * i;
    }
    return octal;
}

