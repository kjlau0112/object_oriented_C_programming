#include "mystruct.h"
#include <stdlib.h>


struct obj {
    int id;
};

 struct myStruct
{
	int lol;
	int haha;
};

//Node* node_malloc()
////{
////	return (Node*)malloc(sizeof(Node));
////}

//m_struct*  opaque_malloc()
//{ 
//	return malloc(sizeof(m_struct));
//};


struct obj * obj_alloc()
{
	return malloc(sizeof(struct obj));
}

void obj_setid(struct obj *o, int i) {
    o->id = i;
}

int obj_getid(struct obj *o) {
    return o->id;
}