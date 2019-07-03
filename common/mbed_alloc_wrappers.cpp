#include <stddef.h>       
#include <stdio.h>    
#include <string.h>    
#include <stdlib.h>

/******************************************************************************/
/* GCC memory allocation wrappers                                             */
/******************************************************************************/

#if defined(TOOLCHAIN_GCC)

extern "C" {
    void *__real__malloc_r(struct _reent *r, size_t size);
    void *__real__memalign_r(struct _reent *r, size_t alignment, size_t bytes);
    void *__real__realloc_r(struct _reent *r, void *ptr, size_t size);
    void __real__free_r(struct _reent *r, void *ptr);
    void *__real__calloc_r(struct _reent *r, size_t nmemb, size_t size);
    void *malloc_wrapper(struct _reent *r, size_t size, void *caller);
    void free_wrapper(struct _reent *r, void *ptr, void *caller);
}


extern "C" void *__wrap__malloc_r(struct _reent *r, size_t size)
{
    return malloc_wrapper(r, size, __builtin_extract_return_addr(__builtin_return_address(0)));
}

extern "C" void *malloc_wrapper(struct _reent *r, size_t size, void *caller)
{
    void *ptr = NULL;
    ptr = __real__malloc_r(r, size);
    return ptr;
}

extern "C" void *__wrap__realloc_r(struct _reent *r, void *ptr, size_t size)
{
    void *new_ptr = NULL;
    new_ptr = __real__realloc_r(r, ptr, size);
    return new_ptr;
}

extern "C" void __wrap__free_r(struct _reent *r, void *ptr)
{
    free_wrapper(r, ptr, __builtin_extract_return_addr(__builtin_return_address(0)));
}

extern "C" void free_wrapper(struct _reent *r, void *ptr, void *caller)
{
    __real__free_r(r, ptr);
}

extern "C" void *__wrap__calloc_r(struct _reent *r, size_t nmemb, size_t size)
{
    void *ptr = NULL;
    ptr = __real__calloc_r(r, nmemb, size);
    return ptr;
}

extern "C" void *__wrap__memalign_r(struct _reent *r, size_t alignment, size_t bytes)
{
    return __real__memalign_r(r, alignment, bytes);
}

#endif // #if defined(TOOLCHAIN_GCC)
