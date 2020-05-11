//typedef struct myStruct m_struct;
//typedef struct node Node;
//
//m_struct* opaque_malloc();
//Node* node_malloc();
struct obj;

void obj_setid(struct obj *, int);

int obj_getid(struct obj *);
struct obj * obj_alloc();