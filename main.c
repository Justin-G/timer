#include "timer.h"

int main(void){
	struct tm user_time = set_time();
	int s_t;
	get_time(&user_time);
	while((s_t = is_time_now(&user_time)) >= 0){
		printf_sec(user_time,s_t);
	}
	return 0;
}