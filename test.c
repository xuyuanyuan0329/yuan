#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main(int argc,char** argv){

	int fd;
	fd = open("/dev/hellodev",O_RDWR);
	if(-1 == fd){
		printf("open err\n");
		return -1;
	}	

	return 0;

}
