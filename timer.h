/*
1����ȡ�û�ʱ��
2���Ƚ�ʱ��
*/
#include <stdio.h>
#include <time.h>
#ifndef TIMER_H_
#define TIMER_H_

void get_time(struct tm *);
time_t is_time_now(struct tm *);
struct tm set_time(void);
void printf_sec(struct tm,int);
#endif