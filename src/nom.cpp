#include "nom.h"

#include <stdlib.h>

using namespace NOM;

nomnom::nomnom(){
	char* alloc = (char*)malloc(1000000);

	for(int i = 0;i < 1000000;i ++) {
		alloc++;
		*alloc = 'a';
	}
}
nomnom::~nomnom(){
	
}