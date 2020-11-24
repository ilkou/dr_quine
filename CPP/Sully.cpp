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
"	if (i > 0) {",
"		ifstream f(",
"./Sully_",
" + to_string(i) + ",
".cpp",
"); i = f.good() ? i : i + 1;",
"		string i_1 = to_string(i - 1);",
"		string strc = ",
"./Sully_",
" + i_1 + ",
".cpp",
";",
"		ofstream mfile;",
"		mfile.open(strc);",
"		mfile << l[0] << n << l[1] << n << l[2] << n << l[3] << n << l[4] << n;",
"		for (i = 0; i <= 40; i++) mfile << q + l[i] + q + ',' + n;",
"		mfile << l[5] << n << l[6] << n << l[7] << n << l[8] << i_1 << ';' << n << l[9] << n << l[10] + q + l[11] + q << l[12] << q + l[13] + q << l[14] << n << l[15] << n << l[16] + q + l[17] + q + l[18] + q + l[19] + q + l[20] << n << l[21] << n << l[22] << n << l[23] << n << l[24] << n << l[25] << n << l[26] << n << l[27] << n << l[28] + q + l[29] + q + l[30] + q + l[31] + q + l[32] << n << l[33] << n << l[34] + q + l[35] + q + l[36] << n << l[37] << n << l[38] << n << l[39] << n << l[40] << n;",
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
};

int main() {
	int i = 6;
	if (i > 0) {
		ifstream f("./Sully_" + to_string(i) + ".cpp"); i = f.good() ? i : i + 1;
		string i_1 = to_string(i - 1);
		string strc = "./Sully_" + i_1 + ".cpp";
		ofstream mfile;
		mfile.open(strc);
		mfile << l[0] << n << l[1] << n << l[2] << n << l[3] << n << l[4] << n;
		for (i = 0; i <= 40; i++) mfile << q + l[i] + q + ',' + n;
		mfile << l[5] << n << l[6] << n << l[7] << n << l[8] << i_1 << ';' << n << l[9] << n << l[10] + q + l[11] + q << l[12] << q + l[13] + q << l[14] << n << l[15] << n << l[16] + q + l[17] + q + l[18] + q + l[19] + q + l[20] << n << l[21] << n << l[22] << n << l[23] << n << l[24] << n << l[25] << n << l[26] << n << l[27] << n << l[28] + q + l[29] + q + l[30] + q + l[31] + q + l[32] << n << l[33] << n << l[34] + q + l[35] + q + l[36] << n << l[37] << n << l[38] << n << l[39] << n << l[40] << n;
		mfile.close();
		string str;
		str = "g++ -Wall -Wextra -Werror " + strc + " -o Sully_" + i_1;
		system(str.c_str());
		str = "./Sully_" + i_1;
		system(str.c_str());
	}
	return (0);
}
