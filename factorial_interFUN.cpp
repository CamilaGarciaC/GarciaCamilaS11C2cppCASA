#include <iostream>

void funcion(int n){
	int i;
	double fact;
   	fact=1;
   	for(i=1;i<=n;i++)
        	fact=fact*i;
	std::cout << "El factorial de " << n << " es:" << fact <<std::endl;
}

int main(){
	int i;
	int n;
	double fact;
   	std::cout << "Introduzca un numero: ";
   	std::cin >> n;
	funcion(n);
	return 0;
}
