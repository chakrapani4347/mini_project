#include"header.h"

/*
* Function Name: modify function

* Author of the Function: K. Venkata Sneha and G. Chakrapani Reddy

* Description of the Function:
	Modify Details is selected, display a list of items which user can modify like Name, 
	Ph. No., Reporting Manger, Band, Reportees, Tech. Area and Project Info.

	Accept the item which needs to be modified and take input from user on that item.

	Update the collected information from user to database component for modification.	

* Other Functions used in this module:
	database() and view()

*/

struct employee *Head=NULL;


void modify(struct employee emp) // Passing structure as an argument to modify function with no return value
{

int emp_id,choice;;
new_node=(node *)malloc(sizeof(node));

if(new_node==NULL)
{
	printf("Memory not allocated\n");
	exit(0);
}
else
{
	new_node = Head;
	printf("Enter the Employee id:");
	scanf("%d",&emp_id);
	while(new_node->link != NULL)
	{
		if(new_node->Emp_id == emp_id)
		{
			printf("Enter the modify component:\n1.Emp_id\n2.Emp_name\n3.Gender\n4.Email id\n5.Band\n6.Date of Joining\n7.Contact No\n8.Reporting manager\n9.Tech area\n10.Project Info\nEnter choice:");
scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("Sorry. You can't edit the Employee ID\n");
					break;
				case 2:
					printf("Enter Modified Employee name:");
					scanf("%s",new_node->Emp_name);		// Reading Employee Name from the user
					displaying_data(struct employee new_node);
					break;

				case 3:
					printf("Sorry. You can't edit the Gender\n");
					break;
				case 4:
					printf("Sorry. You can't edit the Email ID\n");
					break;
				case 5:
					printf("Enter the band:");
					scanf("%s",new_node->Band);		// Reading Employee Band from the user
					displaying_data(struct employee new_node);
					//modify_xl(new_node->Emp_id,new_node->Band,2);
					break;
				case 6:
					printf("Sorry. You can't edit the Date of joining\n");
					break;
				case 7:
					printf("Enter the Contact Number:");
					scanf("%s",new_node->Contact_no);	// Reading Employee Contact Number from the user
					displaying_data(struct employee new_node);
					//modify_xl(new_node->Emp_id,new_node->Contact_no,3);
					break;
				case 8:
					printf("Enter Reporting Manager:");
					scanf("%s",new_node->Reporting_manager); // Reading Employee Reporting Manager from the user
					displaying_data(struct employee new_node);
					//modify_xl(new_node->Emp_id,new_node->Reporting_manager,4);
					break;
				case 9:
					printf("Enter Tech Area:");
					scanf("%s",new_node->Tech_area);	// Reading Employee Tech Area from the user
					displaying_data(struct employee new_node);
					//modify_xl(new_node->Emp_id,new_node->Tech_area,5);
					break;
				case 10:
					printf("Enter project Info:");
					scanf("%s",new_node->Project_info);	// Reading Employee Project Info from the user
					displaying_data(struct employee new_node);
					//modify_xl(new_node->Emp_id,new_node->Project,6);
					break;
				default:
					printf("Exit\n");

			}		
		}
		else
			printf("Employee ID not found\n");
			exit(0);
	}
	new_node=new_node->link;
		}
	}
}
}


void employee_name(struct )
{

}
void displaying_data(struct employee *ptr)
{
	int choice;
	printf("Enter choice:\n1.Modify employee Name\n2.Modify Employee Band\n3.Employee Contact Number\n4.Reporting Manager\n5.Employee Tech Area\n6.Employee Project Info\n");

	switch(choice)
	{
		case 1:
			modify_xl(ptr->Emp_id,ptr->Emp_name,1);
			printf("%s",ptr->Emp_name);
			break;
		case 2:
			modify_xl(ptr->Emp_id,ptr->Emp_Band,2);
			printf("%s",ptr->Emp_band);
			break;
		case 3:
			modify_xl(ptr->Emp_id,ptr->Emp_Contact_number,3);
			printf("%s",ptr->Emp_Contact_no);
			break;
		case 4:
			modify_xl(ptr->Emp_id,ptr->Emp_Reporting_manager,4);
			printf("%s",ptr->Emp_Reporting_manager);
			break;
		case 5:
			modify_xl(ptr->Emp_id,ptr->Emp_Tech_area,5);
			printf("%s",ptr->Emp_Tech_area);
			break;
		case 6:
			modify_xl(ptr->Emp_id,ptr->Emp_Project_info,6);
			printf("%s",ptr->Emp_Project_info);
			break;
		default:
			printf("Wrong input\n");
	}
}
