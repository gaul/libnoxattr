#include <errno.h>
#include <sys/types.h>
#include <sys/xattr.h>

ssize_t listxattr(const char *path, char *list, size_t size)
{
    errno = ENOTSUP;
    return -1;
}

ssize_t llistxattr(const char *path, char *list, size_t size)
{
    errno = ENOTSUP;
    return -1;
}

ssize_t flistxattr(int fd, char *list, size_t size)
{
    errno = ENOTSUP;
    return -1;
}

int setxattr(const char *path, const char *name, const void *value, size_t size, int flags)
{
    errno = ENOTSUP;
    return -1;
}

int lsetxattr(const char *path, const char *name, const void *value, size_t size, int flags)
{
    errno = ENOTSUP;
    return -1;
}

int fsetxattr(int fd, const char *name, const void *value, size_t size, int flags)
{
    errno = ENOTSUP;
    return -1;
}

ssize_t getxattr(const char *path, const char *name, void *value, size_t size)
{
    errno = ENOTSUP;
    return -1;
}

ssize_t lgetxattr(const char *path, const char *name, void *value, size_t size)
{
    errno = ENOTSUP;
    return -1;
}

ssize_t fgetxattr(int fd, const char *name, void *value, size_t size)
{
    errno = ENOTSUP;
    return -1;
}
