Near the top of the source code we declare an enumeration of the different surfaces we have. Enumerations are a shorthand way to do symbolic constants instead of having to do const int KEY_PRESS_SURFACE_DEFAULT = 0; const int KEY_PRESS_SURFACE_UP = 1; const int KEY_PRESS_SURFACE_DOWN = 2; and such. They default to start counting at 0 and go up by one for each enumeration you declare. This means KEY_PRESS_SURFACE_DEFAULT is 0, KEY_PRESS_SURFACE_UP is 1, KEY_PRESS_SURFACE_DOWN is 2, KEY_PRESS_SURFACE_LEFT is 3, KEY_PRESS_SURFACE_RIGHT is 4, and KEY_PRESS_SURFACE_TOTAL is 5, It's possible to give them explicit integer values, but we won't be covering that here. A quick Google search on enumerations should cover that.

One bad habit beginning programmers have is using abritary numbers instead of symbolic constants. For example they'll have 1 mean main menu, 2 mean options, etc which is fine for small programs. When you're dealing with thousands of lines of code (which video games usually do), having a line that says "if( option == 1 )" will produce much more headaches than using "if( option == MAIN_MENU )".


g++ main.cpp `pkg-config --cflags --libs sdl2` && ./a.out
