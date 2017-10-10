#include <stdio.h>

//문제점 : reenterant

char* kd_inet_ntoa(u_int32_t i )
{
	thread static char p[16]; //thread가 생성될 때마다 배열을 선언하게 된다. static 변수로 선언하는 이유는 메모리확보의 안정성을 위해서 이다. 
	 
	...

	return p;

}

char* kd_inet_ntoa(u_int32_t i, char* p )
{
	char p[16]; 
	 
	...

	return p;

}