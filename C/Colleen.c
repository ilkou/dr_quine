#include <stdio.h>

/*
   Hna kandefiniw l macro
*/

# define QUINE "#include <stdio.h>%c%c/*%c   Hna kandefiniw l macro%c*/%c%c# define QUINE %c%s%c%c%cvoid colleen()%c{%c%cprintf(QUINE, 10, 10, 10, 10, 10, 10, 34, QUINE, 34, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c}%c%cint main()%c{%c%c/*%c%c   Hna kan3eyto 3la colleen%c%c*/%c%ccolleen();%c%creturn (0);%c}%c"

void colleen()
{
	printf(QUINE, 10, 10, 10, 10, 10, 10, 34, QUINE, 34, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
}

int main()
{
	/*
	   Hna kan3eyto 3la colleen
	*/
	colleen();
	return (0);
}
