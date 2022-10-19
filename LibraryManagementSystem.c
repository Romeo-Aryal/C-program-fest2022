#include<stdio.h>

#include<stdlib.h>
#include<string.h>


// code to declare function prototype;
void insertData();
void displayData(void);
void updateData(int);
void deleteData(int);
void searchData(void);
int checkBookNo(int);
int findLastBookNo(void);
//code to declare file pointer;
FILE *fp,*fp1;
//code to design struccture 
struct book
{
	int bn;
	char title[200];
	char sub[100];
	float price;
	int nob;
	char author[100];
	char publisher[100];
	
};
//code to declare structure variable;
struct book b;
//code to declare main functiony
int main(){
	int choice;
	int bn;
	while(1)
	{
	 system("clear");	//code to display menu;;
		
	
	printf("\n\n\t\t****************************************************************************");
		printf("\n\t\t****************************************************************************");
			printf("\n\t\t************************WELCOME TO YOU IN LIBRARY BOOKS INFO SYSTEM***************");
         	printf("\n\n\t\t****************************************************************************");
         		printf("\n\n\t\t***********************************||MENU***********************************");
  	printf("\n\n\t\t****************************************************************************");
    printf("\n\t\t\t\t1.  Insert Record");
    printf("\n\t\t\t\t2.  Display Record");
    printf("\n\t\t\t\t3.  Update Record");
    printf("\n\t\t\t\t4.  Delete Record");
    printf("\n\t\t\t\t5.  Search Record");
	printf("\n\t\t\t\t6.  Quit");
	printf("\n\n\tEnter Your Choice between 1 to 6   : ");
	scanf("%d",&choice);
	switch (choice)
	{
	
	case 1:
		//choice call to insertData function
	insertData();
	break;
	case 2:
		// code to call displayData function
		displayData();
		break;
		case 3:
			//code to call updateData function
			printf("\n Enter the book no which you want to update");
			updateData(bn);
			break;
			case 4:
				//code to call deleteData function
				printf("\n Enter the book no.which you want to delete ");
				scanf("%d",&bn);
		        deleteData(bn);
				break;
					case 5:
				//code to call searchData  function
		     searchData();
				break;
	            case 6:
	            	return 0;
	            	default :
	            		printf("\n\t\t SORRY!!!! you entered an invalid choice");
		            printf("\n please Enter valid choice between 1 to 6");
		            
		            return 0;	
}
}
}

//code to declare function defination
void insertData()
{
	char next='y';
	int duplicatebookno=0,lastbookno;
	system("cls");
	while(next=='y'|| next=='Y')
	{
		aa:
			system("cls");
			printf("\nEnter the book no");
			scanf("%d",&b.bn);
			//code to call function to check the book no. has been repeated or not
		//	duplicatebookno=checkBookNo(b.bn);
			if (duplicatebookno==1)
			{
				printf("\n\n The book no. Which you typed just now,is already exist in the data file!!!");
				printf("\n\n please ,enter the unique book no .!!!");
		//		lastbookno=findLastBooknNo();
				printf("\n\n The last book no is :%d ",lastbookno);
				
		
				goto aa;
			}
			fflush(stdin);
			//page no 308;
			printf("\n Enter the title of the book\n");
			fgets(b.title,50,stdin);
			printf("\n Enter the subjest name of the book");
			fgets(b.sub,50,stdin);
			printf("\n Enter the price of the book ");
			scanf("%f",&b.price);
			printf("\nEnter the no of the book ");
			scanf("%d",&b.nob);
			fflush(stdin);
			printf("\n Enter the author of the book");
			fgets(b.author,50,stdin);
			printf("\n Enter the Publisher of the book");
			fgets(b.publisher,50,stdin);
			fp=fopen("Book.dat","a");
			if (fp==NULL){
				printf("\n File creation error occured");
				
			}
			else{
				fwrite(&b,sizeof (b),1,fp);
				fclose(fp);
				printf("\n Do you want to insert record of author book(Y/N)");
				next=getchar();
				
				
			}
	}
	
}
void displayData(void){
system("cls");
fp=fopen("Book.dat","r");
rewind(fp);
if (fp==NULL){
	printf("\n \n .... Read operation failure as the file you are  searching doesnot exist...!!!");	
}
	else{
		printf("\n \t Book no.    \t    Title  \t  Subject  \t  Price  \tNo.Of the books    \t     Author \t   publisher");
		while (fread(&b,sizeof (b),1,fp)==1){
			printf("\n\t%-8d     \t  %s    \t   %s    \t    Rs.%.2f     \t     %d    \t   %s  \t%s",b.bn,b.title,b.sub,b.price,b.nob,b.author,b.publisher);
			
		}
			fclose(fp);
	}
	
}
void updateData(int bn)
{
	fp=fopen("book.dat","r");
	fp1=fopen("newBook.dat","w");
	if(fp==NULL || fp1==NULL){
		printf("\n File operation Failed");
	}
	else {
		//code to dhow the existing data
		printf("\n\n The following are the existing data !!!");
		while (fread(&b,sizeof (b),1,fp)==1)
		{
			if(b.bn==bn){
				printf("\n\t Book No          :  %d",b.bn);
				printf("\n\t Title            :  %s",b.title);
			    printf("\n\t Subject          :  %s",b.sub);
			    printf("\n\t Book price       : RS. %.2f",b.price);
				printf("\n\t No of books      :  %d",b.nob);
			    printf("\n\t Author of book   :  %s",b.author);
				printf("\n\t publisher        : %s",b.publisher);
			}
		}
			// code to enter new data
			rewind(fp);
			printf("\n\nEnter the new corect data ");
			while(fread(&b,sizeof(b),1,fp)==1){
				if (bn==b.bn){
				printf("\n\n\nEnter the book no");
				scanf("%d ",&b.bn);
				fflush(stdin);
				printf("\n Enter the title of the book");
				fgets(b.title,50,stdin);
				printf("\n\nEnter the subject of the book");
				fgets(b.sub,50,stdin);
				printf("\n\nEnter the price of the book");
				scanf("%f",&b.price);
				printf("\n\n Enter the no of the book");
				scanf("%d",&b.nob);
				fflush(stdin);
				printf("\n Enter the author of the book");
				fgets(b.author,50,stdin);
				
				printf("\nEnter the publisher og the book");
				fgets(b.publisher,50,stdin);
				fwrite(&b,sizeof(b),1,fp1);
			}
			else{
				fwrite(&b,sizeof (b),1,fp1);
			}
		}
	     fclose(fp);
	     fclose(fp1);
	     remove("book.dat");
	     rename("newbook.dat","book.dat");
	     printf("\n\n The record has been succesfully updates in the data file");
	     
	}

	
}
void deleteData(int bn){
	fp=fopen("Book.dat","r");
	fp1=fopen("newBoook.dat","w");
	if (fp==NULL || fp1==NULL){
     printf("\nfile Operation filed");

	}
	else{while (fread(&b,sizeof(b),1,fp)==1){
		if(bn=b.bn){
			continue;
		}
		else
		{
		fwrite(&b,sizeof(b),1,fp);
		}
		
	}
	fclose(fp);
	fclose(fp1);
	remove("book.dat");
	rename("newBook.dat","Book.dat");
	printf("\n\n The record has been succesfully deleated from the data file");
	}


}
void searchData(void){
	int bn,found=0;
	char bname[100],subject[100];
	int ch;
	system("cls");
	printf("\n\n\t*********************************************");
	printf("\n\t***************Search Menu**********************");
	printf("\n\t**************************************************");
	printf("\n\t\t1. Search by Book No");
	printf("\n\t\t2. Search by Book Title");
	printf("\n\t\t3. Search by Book Subject");
	printf("\n\t\t4. Quit search");
	scanf("%d",&ch);
	switch(ch){
		case 1: //search by book no
		system("cls");
		fp=fopen("Book.dat","r");
		printf("\n\nEnter the book no which you want to search");
		scanf("%d",&bn);
		if(fp==NULL){
			printf("\nFile search operation failed try again !!!!");

		}
		else {
			while(fread(&b,sizeof(b),1,fp)==1){
				if(b.bn==bn){
				printf("\n\t Book NO.                   :%d",b.bn);
                printf("\n\t  title.                    :%s",b.title);
                printf("\n\t Subject.                   :%s",b.sub);
				printf("\n\t Price.                     :RS%.2f",b.price);
				printf("\n\t NO.of Book.                 :%d",b.nob);	
                printf("\n\t Author                      :%s",b.author);
				printf("\n\t Publisher                   :%s",b.publisher);
				    found=1;
				}
			}
			if(found==0){
				printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
				printf("\nThe book which you are searching for is not found");

			}
			fclose(fp);

		}
		break;
		case 2://search book on the basis of book title
		system("cls");
		fflush(stdin);
		printf("\n\tEnter the title of the book which you want to search");
		fgets(bname,50,stdin);
		fp=fopen("book.dat","r");
		if(fp==NULL){
			printf("\n\t File search operstion failed!!!!!!");

		}
		else {
			while(fread(&b,sizeof(b),1,fp)==1)
			{
				if(strcmp(b.title,bname)==0){
					printf("\n\t Book NO.                   :%d", b.bn);
					printf("\n\t  title.                    :%s", b.title);
					printf("\n\t Subject.                   :%s", b.sub);
					printf("\n\t Price.                     :RS%.2f", b.price);
					printf("\n\t NO.of Book.                 :%d", b.nob);
					printf("\n\t Author                      :%s", b.author);
					printf("\n\t Publisher                   :%s", b.publisher);
					found = 1;
				}
			}
			if(found==0){
				printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
				printf("\n\tThe Book Which you are looking for is not found");
			}
			fclose(fp);
		}
		break;
		case 3:
		//search on the basis of subject
       		system("cls");
			   fflush(stdin);
			   printf("\n\t Enter the name of subjet which you want to search..");
			   fgets(subject,50,stdin);
			   fp=fopen("Book.dat","r");
			   if(fp==NULL){
				   printf("\n File search operation failed!!!!");

			   }
			   else{
				   while(fread(&b,sizeof(b),1,fp)==1){
					   if (strcmp(b.sub,subject)==0){
						   printf("\n\t Book NO.                   :%d", b.bn);
						   printf("\n\t  title.                    :%s", b.title);
						   printf("\n\t Subject.                   :%s", b.sub);
						   printf("\n\t Price.                     :RS%.2f", b.price);
						   printf("\n\t NO.of Book.                :%d", b.nob);
						   printf("\n\t Author                     :%s", b.author);
						   printf("\n\t Publisher                  :%s", b.publisher);
						   found = 1;
					   }
				   }
				   if(found==0){
					   printf("\n\t The book which you are searching is not found");
				   }
				   fclose(fp);

			   }
			   break;
			   case 4://code to close search window
			   printf("\n\t press any key to quit the search operation");
			   break;
			   default:
			   printf("\n YOu enteredinvalid choice for search operation");
	}

}
int checkBookNo(int bn)
{
	int repeated=0,lastbookno;
	struct book b1;
	fp=fopen("Book.dat","r");
	if(fp==NULL){
		printf("\n\t Read operation failure occoured the file which you are searching for doesnot exist");

	}
	else{
		while (fread(&b1,sizeof(b1),1,fp)==1)
		{
			if(b1.bn==bn){
				repeated=1;
				break;

			}
			/* code */
		}
		fclose(fp);

		
	}
return (repeated);
	
}
int findLastBookNo(){
	int lastbookno;
	struct book b2;
	fp=fopen("Book.dat","r");
	if(fp==NULL){
		printf("\n\n File open operation Failure!!");
	}
	else{
		while(fread(&b2,sizeof(b2),1,fp)==1){
			lastbookno=b2.bn;
		}
		fclose(fp);
	}
	return(lastbookno);
}

         	
         	
