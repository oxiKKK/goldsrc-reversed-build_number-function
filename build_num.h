#include <iostream>
#include <windows.h>

#define RELEASE_DAY 34995 // Possibly Thursday, October 24, 1996

const char* date = __DATE__;

const char* mon[] =
{
	"Jan",
	"Feb",
	"Mar",
	"Apr",
	"May",
	"Jun",
	"Jul",
	"Aug",
	"Sep",
	"Oct",
	"Nov",
	"Dec"
};

const char mond[] =
{
	31,
	28,
	31,
	30,
	31,
	30,
	31,
	31,
	30,
	31,
	30,
	31
};

int build_number()
{
	int month = 0, month_days = 0;
	for (; month < 11; month++)
	{
		if (!strncmp(date, mon[month], 3))
			break;

		month_days += mond[month];
	}

	int days = month_days + atoi(date + 4) - 1;
	int year = atoi(date + 7);
	int year_diff = year - (1900 + 1);

	int build = days - (year_diff * -365);
	build += year_diff / 4;

	// Leap years
	if (!(year & 3) && month > 1)
		build++;

	build -= RELEASE_DAY;

	return build;
}
