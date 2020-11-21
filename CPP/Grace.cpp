#include <fstream>
#include <string>
using namespace std;

/*
   spolaya molaya aroya
*/
# define FILE_NAME "./Grace_kid.cpp"
# define GRACE_CLOSE(f) f.close()
# define FT(x)int main() { char q = 34; ofstream mfile; mfile.open(FILE_NAME); string s[] = {"#include <fstream>", "#include <string>", "using namespace std;", "", "/*", "   spolaya molaya aroya", "*/", "# define FILE_NAME ", "./Grace_kid.cpp", "# define GRACE_CLOSE(f) f.close()", "# define FT(x)int main() { char q = 34; ofstream mfile; mfile.open(FILE_NAME); string s[] = {", " for (int i = 0; i < 7; i++)", "mfile << s[i] << endl;", "mfile << s[7] + q + s[8] + q << endl;", "mfile << s[9] << endl;", "mfile << s[10];", "for (int i = 0; i < 24; i++)", "mfile << q + s[i] + q + ',' + ' ';", "mfile << '}' << ';';", "for (int i = 11; i < 22; i++)", "mfile << s[i] + ' ';", "mfile << s[22] << endl << endl << s[23] << endl;", "GRACE_CLOSE(mfile); return (x); }", "FT(0)", }; for (int i = 0; i < 7; i++) mfile << s[i] << endl; mfile << s[7] + q + s[8] + q << endl; mfile << s[9] << endl; mfile << s[10]; for (int i = 0; i < 24; i++) mfile << q + s[i] + q + ',' + ' '; mfile << '}' << ';'; for (int i = 11; i < 22; i++) mfile << s[i] + ' '; mfile << s[22] << endl << endl << s[23] << endl; GRACE_CLOSE(mfile); return (x); }

FT(0)
