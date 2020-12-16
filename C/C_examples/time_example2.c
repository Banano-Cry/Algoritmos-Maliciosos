#include <stdio.h>
#include <time.h>

void dump_time_struct_bytes(struct tm *, int);

int main(){
	long int seconds_since_epoch;
	struct tm current_time, *time_ptr;
	int hour, minute, second, i, day, month, year, day_of_the_month ,day_of_the_week, day_of_the_year, daylight_saving_time, *int_ptr;

	seconds_since_epoch = time(0);
	printf("time() - seconds since epoch: %ld\n",seconds_since_epoch);

	time_ptr = &current_time;

	localtime_r(&seconds_since_epoch, time_ptr);

	hour = current_time.tm_hour;
	minute = time_ptr->tm_min;
	second = *((int *) time_ptr);
	day_of_the_month = *(((int *) time_ptr) + 3);
	month = time_ptr->tm_mon;
	year = current_time.tm_year;
	day_of_the_week = time_ptr->tm_wday;
	day_of_the_year = time_ptr->tm_yday;
	daylight_saving_time = time_ptr->tm_isdst;

	printf("Current time is: %02d:%02d:%02d\n",hour,minute,second);
	printf("Current day is: %02d/%02d/%d\n",day_of_the_month,month, year);	
	printf("Day of the week: %02d\n",day_of_the_week);
	printf("Day of the year: %03d\n",day_of_the_year);
	printf("Daylight_saving_time: %04d\n",daylight_saving_time);

	dump_time_struct_bytes(time_ptr, sizeof(struct tm));
	
	minute = hour = 0;
	int_ptr = (int *) time_ptr;
	
	for(i = 0; i < 9; i++)
	{
	printf("int_ptr @ 0x%08x : %d\n",int_ptr,*int_ptr);
	int_ptr++;
	}
}

void dump_time_struct_bytes(struct tm *time_ptr, int size){
	int i;
	unsigned char *raw_ptr;
	printf("bytes of struct located at 0x%08x\n", time_ptr);
	raw_ptr = (unsigned char *) time_ptr;
	for(i = 0; i < size; i++){
		printf("%02x ",*(raw_ptr+i));
		if(i%16 == 15)
			printf("\n");
	}
	printf("\n");
}
