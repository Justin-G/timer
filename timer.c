#include "timer.h"
time_t is_time_now(struct tm *);
struct tm set_time(void){
	struct tm tmp;
	struct tm * p_tmp;
	time_t tmp_t=time(NULL);
	tmp = *(localtime(&tmp_t));
	
	tmp.tm_hour = 0;
	tmp.tm_min = 0;
	tmp.tm_sec = 0;
	return tmp;
}
void get_time(struct tm * p_user){
	printf("Please input your time:(hh:mm:ss)\n");
	scanf("%2d:%2d:%2d",&(p_user->tm_hour),&(p_user->tm_min),&(p_user->tm_sec));
	while(p_user->tm_hour <0 || p_user->tm_hour > 23 || p_user->tm_min < 0 || p_user->tm_min > 59 || p_user->tm_sec < 0 || p_user->tm_sec > 59){
		printf("时间有错误，请重新输入：\n");
		scanf("%2d:%2d:%2d",&(p_user->tm_hour),&(p_user->tm_min),&(p_user->tm_sec));
	}
	
}
time_t is_time_now(struct tm * p_user){
	time_t now = time(NULL);
	time_t user = mktime(p_user);
	return user - now;
}

void printf_sec(struct tm user,int sec){
	printf("\r距离 %d 年 %d 月 %d 日 %d 时 %d 分 %d 秒 还有 %d 秒",user.tm_year + 1900,user.tm_mon + 1,user.tm_mday,user.tm_hour,user.tm_min,user.tm_sec,sec);
}