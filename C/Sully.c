#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

# define SULLY "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c%c# define SULLY %c%s%c%c%cint	main() {%c%cint i = %d;%c%cchar *strc;%c%cif (i > 0) {%c%c%casprintf(&strc, %c./Sully_%cd.c%c, i);%c%c%ci = access(strc, F_OK ) != -1 ? i : i + 1;%c%c%cfree(strc);%c%c%casprintf(&strc, %c./Sully_%cd.c%c, i - 1);%c%c%cFILE *fp;%c%c%cfp = fopen(strc, %cw%c);%c%c%cfprintf(fp, SULLY, 10, 10, 10, 10, 34, SULLY, 34, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 37, 34, 10, 9, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%c%cfclose(fp);%c%c%cchar *str;%c%c%casprintf(&str, %cclang -Wall -Wextra -Werror %cs -o Sully_%cd%c, strc, i - 1);%c%c%csystem(str);%c%c%casprintf(&str, %c./Sully_%cd%c, i - 1);%c%c%csystem(str);%c%c%cfree(strc);%c%c%cfree(str);%c%c}%c%creturn (0);%c}%c"

int	main() {
	int i = 25;
	char *strc;
	if (i > 0) {
		asprintf(&strc, "./Sully_%d.c", i);
		i = access(strc, F_OK ) != -1 ? i : i + 1;
		free(strc);
		asprintf(&strc, "./Sully_%d.c", i - 1);
		FILE *fp;
		fp = fopen(strc, "w");
		fprintf(fp, SULLY, 10, 10, 10, 10, 34, SULLY, 34, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 37, 34, 10, 9, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 10, 9, 10, 10);
		fclose(fp);
		char *str;
		asprintf(&str, "clang -Wall -Wextra -Werror %s -o Sully_%d", strc, i - 1);
		system(str);
		asprintf(&str, "./Sully_%d", i - 1);
		system(str);
		free(strc);
		free(str);
	}
	return (0);
}
