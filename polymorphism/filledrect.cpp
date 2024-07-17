#include "filledrect.h"

FilledRect::FilledRect(int h, int w, string fill_char)
: Rectangle(h, w) {
    // calling that rectangle constuctor pissed me off, as I was NOT allowed to call it any other way
    // and it took me about an hour to solve this problem.
   fill = fill_char;
   
}
   

string FilledRect::to_string() const
{
   string rect = Rectangle::to_string();
   // nice cock. 
   string result = "";
   for (int i = 0; i < rect.length(); i++)
   {
      if (rect[i] == ' ')
      {
         /* Your code goes here */
         //rect[i] = fill;
         result += fill;
      }
      else
      {
         /* Your code goes here */
         result += rect[i];
      }
   }
   return result;
}
