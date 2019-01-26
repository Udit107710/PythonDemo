#include<stdio.h>

int main()
{
	int arr[256] = {0};
	
	memset(arr,0,256);
	
	printf("file opened!!\n");
	
	FILE* fp = fopen("test.txt", "r");
	char ch = getc(fp);
	
	while(ch != EOF) {printf("%c,%d\n", arr[ch]);++arr[ ch]; ch = getc(fp);}
	fclose(fp);
	
	printf("file closed!!\n");

	for(int i =0; i< 256;++i)
		if(arr[i] != 0) printf("%c: %d\n", arr[i]);
	

	return 0;
}
