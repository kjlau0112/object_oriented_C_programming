#include <stdio.h>
#include "mystruct.h"

int main(int argc, char **argv)
{ 	
    	struct obj *ptr = obj_alloc();
	m_struct *m_ptr = opaque_malloc();
	
	//ptr->id=100; //Forbidden
   	
	set_m_struct_member(m_ptr, 2000);
	obj_setid(ptr, 10);
	
	printf("obj_getid %d\n",obj_getid(ptr));
	printf("get_m_struct_member haha %d\n", get_m_struct_member_haha(m_ptr));
	printf("get_m_struct_member lol %d\n", get_m_struct_member_lol(m_ptr));
	return 0;
}
