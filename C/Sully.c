#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

# define SULLY "#include <stdio.h>%c#include <stdlib.h>%c#include <unistd.h>%c%c# define SULLY %c%s%c%c%cint	main()%c{%c%cint i = %d;%c%cchar strc[12];%c%ci = access( %c./Sully_5.c%c, F_OK ) != -1 ? i : 6;%c%csprintf(strc, %c./Sully_%cd.c%c, i - 1);%c%cif (i >= 0)%c%c{%c%c%cFILE *fp;%c%c%cfp = fopen(strc, %cw%c);%c%c%cfprintf(fp, SULLY, 10, 10, 10, 10, 34, SULLY, 34, 10, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 34, 34, 10, 9, 34, 37, 34, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 37, 34, 10, 9, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 10, 9, 10, 10);%c%c%cfclose(fp);%c%c%cchar str[51];%c%c%csprintf(str, %cclang -Wall -Wextra -Werror %cs -o Sully_%cd%c, strc, i - 1);%c%c%csystem(str);%c%c%csprintf(str, %c./Sully_%cd%c, i - 1);%c%c%csystem(str);%c%c}%c%creturn (0);%c}%c"

int	main()
{
	int i = 5;
	char strc[12];
	i = access( "./Sully_5.c", F_OK ) != -1 ? i : 6;
	sprintf(strc, "./Sully_%d.c", i - 1);
	if (i >= 0)
	{
		FILE *fp;
		fp = fopen(strc, "w");
		fprintf(fp, SULLY, 10, 10, 10, 10, 34, SULLY, 34, 10, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 34, 34, 10, 9, 34, 37, 34, 10, 9, 10, 9, 10, 9, 9, 10, 9, 9, 34, 34, 10, 9, 9, 10, 9, 9, 10, 9, 9, 10, 9, 9, 34, 37, 37, 34, 10, 9, 9, 10, 9, 9, 34, 37, 34, 10, 9, 9, 10, 9, 10, 9, 10, 10);
		fclose(fp);
		char str[51];
		sprintf(str, "clang -Wall -Wextra -Werror %s -o Sully_%d", strc, i - 1);
		system(str);
		sprintf(str, "./Sully_%d", i - 1);
		system(str);
	}
	return (0);
}
