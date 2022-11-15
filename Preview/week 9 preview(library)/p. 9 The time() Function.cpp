#include <ctime>
#include <cstdio>
#include <iostream>
//struct tm { 
//	int tm_sec;    /* seconds after the minute (0 to 61) */
//	int tm_min;    /* minutes after the hour (0 to 59) */
//	int tm_hour;   /* hours since midnight (0 to 23) */
//	int tm_mday;   /* day of the month (1 to 31) */
//	int tm_mon;    /* months since January (0 to 11) */
//	int tm_year;   /* years since 1900 */
//	int tm_wday;   /* days since Sunday (0 to 6) */
//	int tm_yday;   /* days since January 1 (0 to 365) */
//	int tm_isdst;  /* Daylight Savings Time (1: DST, 0: no) */
//};

int main ()
{
	time_t now;     // typedef unsigned long time_t; time_t�N�ܦ��F�@��data type�A��now�O�ܼ� 
	tm * timeinfo;  // tm�O�@��data type���W�r(���W����struct)�A�� *timeinfo �N�O�@�ӫ����ܼơAtm����̪��F�賣�� 
	const char *wday[]={"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."}; // []�̭��i�g 7�]�i���g  
	time (&now);    // time �O�@�Ө�ơA�� now����m�Ƕi�h�o�Ө��  time_t time(time_t* ptr); 
					// time_t* ptr = &now;
	timeinfo = localtime(&now); // localtime �O�@�Ө�ƫ��СA��now����m�Ƕi�h�o�Ө�ƫ���
								// tm* localtime(const time_t* ptr); // const time_t* ptr = &now; 
	printf("Time: %u:%u:%u\n", timeinfo -> tm_hour, timeinfo -> tm_min, timeinfo -> tm_sec);
								// �]���O pointer�ҥH���̭����������ȭn�� -> 
	printf("Date: %u/%u/%u\n", timeinfo -> tm_year + 1900, timeinfo -> tm_mon + 1, timeinfo -> tm_mday);
	printf("Day of Week: %s\n",wday[timeinfo -> tm_wday]);
	return 0;
}
