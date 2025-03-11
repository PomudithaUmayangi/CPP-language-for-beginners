
#include <iostream>
#include "Distance.h"
using namespace std;
int main()
{
	Distance obj1; // create a static objct of the distacne slass using the  --classname. objcname--

	//displaye the details by using the printDistance()
	obj1.printDistance(); // displys 0 cause we defin as 0  (print value inside the method)


	Distance obj2(11, 6.25);


	//dynamic
	Distance *dist1 = new Distance();

	Distance* dist1 = new Distance(11, 6.26);// overloaded constrctr 

	dist1 -> printDistance(); // call constructr

	return 0;
}

