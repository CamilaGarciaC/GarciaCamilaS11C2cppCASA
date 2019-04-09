#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void funcion1(int arr1[5], int arr2[5]){
	int producto;
	int i;
	for(int i=0; i<5; i++){
	producto[i]=arr1[i]*arr2[i];
	}
	std::cout << producto[i] <<std::endl;
}

//void funcion2(int arr1[5], int arr2[5]){

//}



int main(){
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {10,20,30,40,50};
	int producto[5];
	int i;
	int j;
	funcion1(arr1, arr2);

	return 0;
//	funcion2(arr1, arr2);
}
