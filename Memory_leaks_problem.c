/*
How to Avoid Memory Leaks in C:

✅ Always use free() for every malloc(), calloc(), or realloc().
✅ Set pointers to NULL after freeing to avoid dangling pointers.
✅ Avoid losing references to allocated memory before freeing it.
✅ Use memory debugging tools like valgrind or asan.
✅ Prefer stack allocation (int arr[10]) when possible instead of heap (malloc()).
✅ Free memory before returning from functions that allocate memory.
✅ Properly free dynamically allocated memory in data structures like linked lists.
✅ Handle realloc() carefully to avoid memory leaks if allocation fails.

So, this was summary of how to avoid memory leaks in c language.
*/
