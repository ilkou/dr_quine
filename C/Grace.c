#include <stdio.h>

/*
   spolaya molaya aroya
*/

# define FILE_NAME "./Grace_kid.c"

# define GRACE "#include <stdio.h>%c%c/*%c   spolaya molaya aroya%c*/%c%c# define FILE_NAME %c./Grace_kid.c%c%c%c# define GRACE %c%s%c%c%c# define FT(x)int main() { FILE *fd; fd = fopen(FILE_NAME, %cw%c); fprintf(fd, GRACE, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, GRACE, 34, 10, 10, 34, 34, 10, 10, 10); fclose(fd); return (x); }%c%cFT(0)%c"

# define FT(x)int main() { FILE *fd; fd = fopen(FILE_NAME, "w"); fprintf(fd, GRACE, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 34, GRACE, 34, 10, 10, 34, 34, 10, 10, 10); fclose(fd); return (x); }

FT(0)
