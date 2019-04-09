#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void funcion(int a, int b)
{int contador=0;
 int primo;
    while (a<=b){	
	a++;
        primo=1;
        contador=2;
            while (contador<=a/2){
                if(a%contador==0)
                    primo=0;
                    contador++;}
            if(primo!=0)
	    std::cout << a <<std::endl;}
}

int main(){
    int a,b;
   	std::cout << "Introduzca un numero a: ";
   	std::cin >> a;
   	std::cout << "Introduzca un numero b: ";
   	std::cin >> b;
    funcion(a,b);
    return 0;
}
