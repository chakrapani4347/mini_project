#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include"header.h"
//#include"add_module.c"

int main()
{
add_database(struct employee emp);
modify_database(char id[],int option);
}

void add_database(struct employee emp)
{
	FILE *fp;
	fp=fopen("Record.xlsx","a+");
	if(fp == NULL){
                printf("file can not be open for some reason :\n");
                return 1;
        }
	fprintf(fp,"%s,%s,%c,%s,%s,%d/%d/%d,%s%d,%s,%s%s\n",e.Emp_id,e.Name,e.gen,e.Email_id,e.Band,e.DOJ.Date,e.DOJ.Month,e.DOJ.Year,"+91 "e.Contact_no,e.Reporting_manager,e.Tech_area,e.Project_info);
	
	printf("data added successfully :\n");
	fclose(fp);
}

void modify_database(char id[],int option)
{
	printf("Enter the choice to modify:\n1.Name\n2.Band\n3.Ph_No\n4.Reporting_Manager\n5.Tech_Area\n6.Project info\n");
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }
	switch(option)
	{
		case 1:
		name_edit(fp);
		break;
		
		case 2:
		band_edit();
		break;
		
		case 3:
		Ph_no_edit();
		break;
		
		case 4:
		Reporting_mng_edit();
		break;
		
		case 5:
		Tech_Area();
		break;
		
		case 6:
		Project_info();
		break;
	}
}

void name_edit(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 1){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",emp.name);
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
}	
		
void band_edit(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 4){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",emp.band);
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
}	
		
void Ph_no_edit(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 6){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",emp.Contact_no);
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
}	
		
void Reporting_mng_edit(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 7){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",e.Reporting_manager;
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
		
}	
			
void Reporting_mng_edit(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 7){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",e.Reporting_manager);
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
		
}	
void Tech_Area(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 8){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",e.Tech_area);
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
		
}	
void Project_info(FILE *fp)
{
	char ch,buf[180];
	int i=0,flag=0;write_flag=0;
	
	fp = fopen("Record.xlsx","r+");//open  xl file in read mode
        if(fp == NULL){
                printf("file can not be open for some resion :\n");
                return 1;
        }

	while ((ch=getc(fp))!=EOF)//read the data byte by byte from the xl file
	{
	if(ch=='\n')
		i=0;
		buf[i++]=ch;
		if(flag==1)
		{
//			printf("%c",ch);
			if(ch==',')
				write_flag++;
			if(write_flag == 9){
				fseek(fp, -1, SEEK_CUR);
			//	fprintf(fp,",%s ","+91");
				fprintf(fp,",%s",e.Project_info);
				fseek(fp, 0, SEEK_CUR);
			retuen 0;
			}
		}
//	printf("%c",ch);
	if(strstr(buf,data))
	{
		flag=1;
//		printf("%c",ch);
//		exit(0);
	}
	if(i==179){
	i=0;	
	}

	}

		fclose(fp);
		
}	
			
	
