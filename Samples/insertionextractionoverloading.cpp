#include <iostream>
#include <queue>
using namespace std;

class WaitingLine
{
public:
   WaitingLine& operator<<(const string& name) {
      // Add the name to the end of the line
      line.push(name);
       
      cout << name << " enters the back of the line" << endl;
       
      return *this;
   }
   WaitingLine& operator>>(string& frontName) {
      // Copy the name at the front of the line to frontName, then remove
      frontName = line.front();
      line.pop();
       
      return *this;
   }

   friend ostream& operator<<(ostream& out, const WaitingLine& line) {
      out << "(front)";
      queue<string> lineCopy = line.line;
      while (!lineCopy.empty()) {
         string lineItem = lineCopy.front();
         lineCopy.pop();
         out << " " << lineItem;
      }
      out << " (back)";
      return out;
   }
   
   friend istream& operator>>(istream& in, WaitingLine& line) {
      string inString;
      in >> inString;
      line << inString;
      return in;
   }
   
   queue<string> line;
};


int main() {
   WaitingLine line1;
   line1 << "Lion";
   line1 << "Tiger";
   line1 << "Bear";
 
   string name;
   for (int i = 0; i < 2; i++) {
      line1 >> name;
      cout << name << " exits the front of the line" << endl;
   }
 
   // Add "Duck" and "Goose" to the back of the line
   line1 << "Duck";
   line1 << "Goose";
 
   for (int i = 0; i < 3; i++) {
      line1 >> name;
      cout << name << " exits the front of the line" << endl;
   }

   cout << "Exiting main" << endl;
   return 0;
}
