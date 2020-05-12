typedef struct myStruct m_struct;
struct obj;

m_struct* opaque_malloc();
void obj_setid(struct obj *, int);
void set_m_struct_member(m_struct *m_ptr, int value);
int get_m_struct_member_haha(m_struct *m_ptr);
int get_m_struct_member_lol(m_struct *m_ptr);

int obj_getid(struct obj *);
struct obj * obj_alloc();