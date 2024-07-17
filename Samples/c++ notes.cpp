#include <iostream>
using namespace std;

int main() {

// intergers are numbers EX: 1 2 3 4 5 etc
	int num = 8;

// double is floating point numbers EX: 8.0, 7.43, etc
	double num2 = 2.0;

// char are individual characters. EX: A a B b C c ! @ etc
	char letter = 'A';

// booleans are true or false.
	bool boolean1 = true;

// strings are lines of text. EX: "This is a Sentence."
	string teststring = "Strings are text";

// std::cout prints what ever is chained into it to the console
	std::cout << "text. \n"<< num << num2 << letter << boolean1 << teststring << '\n';

// std::cin takes input and can asign that input to a variable as shown.
	std::cin >> teststring;

	if ( boolean1 == true ) {
		std::cout << "If the boolean variable is true, this code runs. \n";
	}
	else if ( boolean1 = false ) {
		std::cout << "If the boolean variable is false, this code runs. \n";
	}
	else {
		std::cout << "If the bool ean variable is neither, this code will run \n";
	}

/* relational operators inclue: < (less than) > (greater than) <= ( less than or equal to)
>= (greater than or equal to) == (equal to) != (not equal to) */

//Logical operators include: && (the and operator) || (the or operator) ! (and the not operator)

/* the && (and) operator returns true if the condition on the left and the right are both true.
truth table for &&:
a      b      a && b
false  false  false
false  true   false
true   false  false
true   true   true
*/

if (bool == true) && (char == 'A') {
	std::cin << "if bool equals true and char equals A, then both are true and this returns true, so this code runs. \n";
}

/* the || (or) operator returns true when the condition on the left OR right is true.
truth table for ||:
a      b      a || b
false  false  false
false  true   true
true   false  true
true   true   true
*/

if (1 < 2) || (2 > 3) {
	std::cout << "If 1 is less than 2 or 2 is greater than 3, this code runs. \n";
	std::cout << "1 is less than two, but 2 is not greater than 3. \n";
	std::cout << "But only one of these conditions have to be true for this if statement to return true. \n";
}

/* the ! (not) operator reverses the bool outcome of the expression that immediatly follows.
truth table for !:
a      !a
false  true
true   false
EX: (!true) returns false. and (!false) returns true. and (!(10 < 11)) returns false.
*/
boolean1 = false;
if (!boolean1) {
	std::cout << "If boolean1 is false, this code runs. \n";
}

/* switch statements are a way of simplifying if statements. The break keyword
stops the remaining cases from being checked and executed. */





}
