#include "../inc/libmx.h"

char *mx_itoa(int number) {
	long n = number;
	char *res = mx_strnew(12);
	int sign, i = 0;
	if(number == 0) return "0";
	if((sign = number) < 0) n *= -1;
	while(n != 0){
		res[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	if(sign < 0) res[i] = '-';
	mx_str_reverse(res);
	res[i + 1] = (char)NULL;
	return res;
}
