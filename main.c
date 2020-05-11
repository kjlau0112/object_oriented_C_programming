#include <stdio.h>
#include "mystruct.h"
//typedef struct myStruct m_struct;
int main(int argc, char **argv)
{ 	
    struct obj *ptr = obj_alloc();
	//ptr->id=100; //HARAM
	obj_setid(ptr, 10);
	printf("%d\n",obj_getid(ptr));
	return 0;
}
