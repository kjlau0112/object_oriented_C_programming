#include "mystruct.h"
#include <stdlib.h>


struct obj 
{
    int id;
};

struct myStruct
{
	int lol;
	int haha;
};

m_struct*  opaque_malloc()
{ 
	return malloc(sizeof(m_struct));
};

void set_m_struct_member(m_struct *m_ptr, int value)
{
	m_ptr->haha = value;
	m_ptr->lol = (m_ptr->haha)+value;
}

int get_m_struct_member_haha(m_struct *m_ptr)
{
	return m_ptr->haha;
}

int get_m_struct_member_lol(m_struct *m_ptr)
{
	return m_ptr->lol;
}

struct obj * obj_alloc()
{
	return malloc(sizeof(struct obj));
}

void obj_setid(struct obj *o, int i) 
{
    o->id = i;
}

int obj_getid(struct obj *o) 
{
    return o->id;
}