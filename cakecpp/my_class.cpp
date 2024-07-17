#include <iostream>
#include "my_class.hpp"

Cake::Cake(bool chocolate, bool extra) {
	if (chocolate == true && extra == true) {
		std::cout << "Chocolate cake with extra frosting coming up.\n";
	}
	else if (chocolate == true && extra == false) {
		std::cout << "Chocolate cake coming up.\n";
	}
	else if (chocolate == false && extra == true) {
		std::cout << "Vanilla cake with extra frosting coming up.\n";
	}
	else {
		std::cout << "Vanilla cake coming up.\n";
	}
}

Cake::~Cake() {
	std::cout << R"(
            ,:/+/-                      
            /M/              .,-=;//;-  
       .:/= ;MH/,    ,=/+%$XH@MM#@:     
      -$##@+$###@H@MMM#######H:.    -/H#
 .,H@H@ X######@ -H#####@+-     -+H###@X
  .,@##H;      +XM##M/,     =%@###@X;-  
X%-  :M##########$.    .:%M###@%:       
M##H,   +H@@@$/-.  ,;$M###@%,          -
M####M=,,---,.-%%H####M$:          ,+@##
@##################@/.         :%H##@$- 
M###############H,         ;HM##M$=     
#################.    .=$M##M$=         
################H..;XM##M$=          .:+
M###################@%=           =+@MH%
@################M/.          =+H#X%=   
=+M##############M,       -/X#X+;.      
  .;XM##########H=    ,/X#H+:,          
     .=+HM######M+/+HM@+=.              
         ,:/%XM####H/.              
              ,.:=-.  
)";
}
