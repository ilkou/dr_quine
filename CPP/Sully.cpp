#include <fstream>
#include <string>
using namespace std;
char q = 34, n = 10;
string l[] = {
"#include <fstream>",
"#include <string>",
"using namespace std;",
"char q = 34, n = 10;",
"string l[] = {",
"};",
"",
"int main() {",
"	int i = ",
"	ifstream f(",
"./Sully_5.cpp",
"); i = f.good() ? i : 6;",
"	string strc = ",
"./Sully_",
" + i_1 + ",
".cpp",
";",
"	if (i > 0)",
"	{",
"		ofstream mfile;",
"		mfile.open(strc);",
"		mfile << l[0] << n << l[1] << n << l[2] << n << l[3] << n << l[4] << n;",
"		for (i = 0; i <= 39; i++) mfile << q + l[i] + q + ',' + n;",
"		mfile << l[5] << n << l[6] << n << l[7] << n << l[8] << i_1 << ';' << n << l[9] + q + l[10] + q << l[11] << n << l[39] << n << l[12] + q + l[13] + q + l[14] + q + l[15] + q + l[16] << n << l[17] << n << l[18] << n << l[19] << n << l[20] << n << l[21] << n << l[22] << n << l[23] << n << l[24] << n << l[25] << n << l[26] + q + l[27] + q + l[28] + q + l[29] + q + l[30] << n << l[31] << n << l[32] + q + l[33] + q + l[34] << n << l[35] << n << l[36] << n << l[37] << n << l[38] << n;",
"		mfile.close();",
"		string str;",
"		str = ",
"g++ -Wall -Wextra -Werror ",
" + strc + ",
" -o Sully_",
" + i_1;",
"		system(str.c_str());",
"		str = ",
"./Sully_",
" + i_1;",
"		system(str.c_str());",
"	}",
"	return (0);",
"}",
"	string i_1 = to_string(i - 1);",
};

int main() {
	int i = 5;
	ifstream f("./Sully_5.cpp"); i = f.good() ? i : 6;
	string i_1 = to_string(i - 1);
	string strc = "./Sully_" + i_1 + ".cpp";
	if (i > 0)
	{
		ofstream mfile;
		mfile.open(strc);
		mfile << l[0] << n << l[1] << n << l[2] << n << l[3] << n << l[4] << n;
		for (i = 0; i <= 39; i++) mfile << q + l[i] + q + ',' + n;
		mfile << l[5] << n << l[6] << n << l[7] << n << l[8] << i_1 << ';' << n << l[9] + q + l[10] + q << l[11] << n << l[39] << n << l[12] + q + l[13] + q + l[14] + q + l[15] + q + l[16] << n << l[17] << n << l[18] << n << l[19] << n << l[20] << n << l[21] << n << l[22] << n << l[23] << n << l[24] << n << l[25] << n << l[26] + q + l[27] + q + l[28] + q + l[29] + q + l[30] << n << l[31] << n << l[32] + q + l[33] + q + l[34] << n << l[35] << n << l[36] << n << l[37] << n << l[38] << n;
		mfile.close();
		string str;
		str = "g++ -Wall -Wextra -Werror " + strc + " -o Sully_" + i_1;
		system(str.c_str());
		str = "./Sully_" + i_1;
		system(str.c_str());
	}
	return (0);
}
