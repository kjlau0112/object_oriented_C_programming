"Forbidden" C Programming 
C++ style C programming aka opaque pointer 

https://en.wikipedia.org/wiki/Opaque_pointer

I sort of thought this is forbidden programming in C is because of the error message.

In C++, if you attempt to access private member, you get a obvious warning that this member is private and shall not access outside of the class.

But in opaque pointer, iif you try something something like this in main
	
ptr->id=100; //Forbidden

n/gcc.exe -c  "D:/User/Documents/code_lite_cpp/CodeLite/OpaqueObject/mystruct.c" -g -O0 -Wall  -o ./Debug/mystruct.c.o -I. -I.
D:/User/Documents/code_lite_cpp/CodeLite/OpaqueObject/main.c: In function 'main':
D:/User/Documents/code_lite_cpp/CodeLite/OpaqueObject/main.c:8:5: error: dereferencing pointer to incomplete type 'struct obj'

Opaque pointer utilize heavily in IPC design