#include <sstream>
int string_to_int(string s) {
    istringstream strm;
    strm.str(s);
    int n = 0;
    strm >> n;
    return n;
}
string int_to_string(int n)
{
   ostringstream strm;
   strm << n;
   return strm.str();
}

/* 
string month = "January";
int day = 04;
int year = 1973;
ostringstream strm;
strm << month << " " << setw(2) << setfill('0') << day << ", " << year;
string output = strm.str();
Now output is the string "January 04, 1973". Note that we converted the integers day and year into a string.
*/
