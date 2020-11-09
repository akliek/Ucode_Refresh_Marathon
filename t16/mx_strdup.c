#include <string.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    if(str == 0)
        return NULL;
    char *p = mx_strnew(mx_strlen(str));
    mx_strcpy(p, str);
    return p;
}
