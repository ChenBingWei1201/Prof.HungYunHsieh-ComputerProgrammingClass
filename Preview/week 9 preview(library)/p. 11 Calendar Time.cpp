#include <iostream>
#include <ctime>
int main ()
{
	time_t now;
	tm * timeinfo;
	char buffer [80];
	time (&now);
	timeinfo = localtime(&now);
	strftime(buffer, sizeof(buffer), "Now it's %I:%M:%S %p.", timeinfo);
	std::cout << buffer << '\n';
	return 0;
	
}
