#include "hwexpressions.h"
#include <iostream>
using namespace std;

const double tax_rate = 6.75;

	double get_sales_tax_amount(double meal_amount)
	{
		return meal_amount*(tax_rate/100);
	}
	double get_tip_amount(double meal_amount,double tip_rate)
	{
		return meal_amount*(tip_rate/100);
	}





