#include <iostream>
#include <string>
using namespace std;

/*
   Hna kandefiniw l macro
*/

void colleen(string l[], char q) {
	for (int i = 0; i <= 22; i++)
		cout << l[i] << endl;
	for (int i = 0; i <= 27; i++)
		cout << l[27] + q + l[i] + q + ',' << endl;
	for (int i = 23; i < 27; i++)
		cout << l[i] << endl;
}

int main() {
	/*
	   Hna kan3eyto 3la colleen
	*/
	char q = 34;
	string l[] = {
	"#include <iostream>",
	"#include <string>",
	"using namespace std;",
	"",
	"/*",
	"   Hna kandefiniw l macro",
	"*/",
	"",
	"void colleen(string l[], char q) {",
	"	for (int i = 0; i <= 22; i++)",
	"		cout << l[i] << endl;",
	"	for (int i = 0; i <= 27; i++)",
	"		cout << l[27] + q + l[i] + q + ',' << endl;",
	"	for (int i = 23; i < 27; i++)",
	"		cout << l[i] << endl;",
	"}",
	"",
	"int main() {",
	"	/*",
	"	   Hna kan3eyto 3la colleen",
	"	*/",
	"	char q = 34;",
	"	string l[] = {",
	"	};",
	"	colleen(l, q);",
	"	return (0);",
	"}",
	"	",
	};
	colleen(l, q);
	return (0);
}
