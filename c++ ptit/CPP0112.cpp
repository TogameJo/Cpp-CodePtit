#include <iostream>
#include <math.h>
#include <iomanip>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int x1,y1,x2,y2;
		std::cin>>x1>>y1>>x2>>y2;
		double distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
		std::cout<<std::fixed<<std::setprecision(4)<<distance<<std::endl;
	}
}
