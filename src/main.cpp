#include <iostream>

#include <windows.h>

#include "nom.h"

int main(){
	std::cout << "How much ram do u wanna eat ? (in Mo)" << std::endl;
	std::cout << "> ";
	
	int size = 0;
	
	std::cin >> size;
	std::cout << "Nomming " << size << "Mo" << std::endl;



	NOM::nomnom* noms = (NOM::nomnom*)malloc(sizeof(NOM::nomnom) * size);

	for(int i = 0;i < size;i ++){
		noms++;
		*noms = NOM::nomnom();
		std::cout << "Ate " << i << "Mo" << std::endl;
	}
	
	
	
	std::cout << "ate " << size << "Mo" << std::endl;

	while(true){
		Sleep(100);
	}

}


