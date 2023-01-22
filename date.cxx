#include <stdio.h>
int date(int d, int m, int y)
{
	int s = 0, f;
	for (int i = 1; i < y; i++)

	{
		if (i % 400 == 0)
			s = s + 366;

		else if (i % 4 == 0 && i % 100 != 0)
			s = s + 366;
		else
			s = s + 365;
	}
	if (y % 400 == 0)
		f = 29;
	else if (y % 4 == 0 && y % 100 != 0)
		f = 29;
	else
		f = 28;
	switch (m)
	{
	case 1:
		s = d + s;
		break;
	case 2:
		s = s + 31 + d;
		break;
	case 3:
		s = s + 31 + f + d;
		break;
	case 4:
		s = s + 62 + f + d;
		break;
	case 5:
		s = s + 92 + f + d;
		break;
	case 6:
		s = s + 123 + f + d;
		break;
	case 7:
		s = s + 153 + f + d;
		break;
	case 8:
		s = s + 184 + f + d;
		break;
	case 9:
		s = s + 215 + f + d;
		break;
	case 10:
		s = s + 245 + f + d;
		break;
	case 11:
		s = s + 276 + f + d;
		break;
	case 12:
		s = s + 306 + f + d;
		break;
	}
	int k;
	k = s % 7;
	switch (k)
	{
	case 1:
		printf("\nmon\n%d days", s);
		break;
	case 2:
		printf("\ntue\n%d days", s);
		break;
	case 3:
		printf("\nwed\n%d days", s);
		break;
	case 4:
		printf("\nthu\n%d days", s);
		break;
	case 5:
		printf("\nfri\n%d days", s);
		break;
	case 6:
		printf("\nsat\n%d days", s);
		break;
	case 0:
		printf("\nsun\n%d days", s);
		break;
	}
}
int main()
{
	int d, m, y;
	for (int i = 1; i > 0; i++)
	{
		printf("\nDATE=");
		scanf("%d %d %d", &d, &m, &y);
		printf("\n%s", date(d, m, y));
	}
	return 0;
}
