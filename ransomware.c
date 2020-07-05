#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     disk_recon(char drive)
{
	int i;
	FILE* fs;

	if ((fs = fopen("oss.png", "w")) != NULL)
	{	//확장자바꾸기
		//함수추가해서 파일번갈아가며 변조하게 만들기
		fprintf(fs, "%d\n", rand()); //암호함수로 바꾸기
	}
	else
		return (0);
        return (1);
}

int     main(int argc, char *argv[])
{
    char drive;
    //OS공급자 식별함수 넣기
    drive = 'Z';
    while (drive == 'E')
    {
        if (disk_recon(drive) == 1)
            ;
		    drive--;
    }
    return(0);
}
