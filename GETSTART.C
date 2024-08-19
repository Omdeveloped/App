#include<stdio.h>
#include<conio.h>


int n,clg,course,onn;
int i,j;
int bsc,bcom,ba,bba;
char aadhar[20],clg_1,clg_2;
char bank;
char name[50],fname[50],mname[50],no[20],mail[100],dob[50],scl[100][100];


void detail();


void result()
{
	if(n==1)     //college
	{
	textcolor(12);
	cprintf("\nENGINNERING");
	}
	else if(n==2)
	printf("\nSCIENCE");

 if(clg==1)             //clg name
	{
	textcolor(12);
	cprintf("\nsit");
	}
 else
	{
	textcolor(12);
	cprintf("\ntce");
	}


  if(course==1)       //course
	{
	textcolor(12);
	cprintf("\nCSE");
	}
  else if(course==2)
	{
	textcolor(12);
	cprintf("\nECE");
	}
  else if(course==3)
	{
	textcolor(12);
	cprintf("\nEEE");
	}
  else if(course==4)
	{
	textcolor(12);
	cprintf("\nCIVIL");
	}
  else if(course==5)
	{
	textcolor(12);
	cprintf("\nMECH");
	}
}

void sciresult()
{
	if(n==1)
	printf("\nengineering");
	else if(n==2)
	{
	textcolor(12);
	cprintf("\nscience");
	}

if(clg==1)
	{
	textcolor(12);
	cprintf("\nsourasthra college");
	}
else if(clg==2)
	{
	textcolor(12);
	cprintf("\nmedura college");
		}
else
	{
	textcolor(12);
	cprintf("\namerican college");
	}

if(course==1)
{
	textcolor(12);
	cprintf("\nB.sc");
		if(bsc==1)
		{
		textcolor(12);
		cprintf("\nphysics");
		}
		else if(bsc==2)
		{
		textcolor(12);
		cprintf("\nchemistry");
		}
		else if(bsc==3)
		{
		textcolor(12);
		cprintf("\nmathematics");
		}
		else
		{
		textcolor(12);
		cprintf("\ncomputer science");
		}
}

else if(course==2)
{
	textcolor(12);
	cprintf("\nB.A");
		if(ba==1)
		{
		textcolor(12);
		cprintf("\ntamil");
		}
		else if(ba==2)
		{
		textcolor(12);
		cprintf("\nenglish");
		}
		else if(ba==3)
		{
		textcolor(12);
		printf("\nhindi");
		}
		else
		{
		textcolor(12);
		cprintf("\nsanskrit");
		}
}
else if(course==3)
{
	textcolor(12);
	cprintf("\nB.com");
		if(bcom==1)
		{
		textcolor(12);
		cprintf("\nb.com(CA)");
		}
		else if(bcom==2)
		{
		textcolor(12);
		cprintf("\nB.com(CS)");
		}
		else
		{
		textcolor(12);
		cprintf("\nCA");
		}
}

else
{
	textcolor(12);
	cprintf("\nBBa");
}

}


void online()
{
int onn;
printf("\n1.onnline \n2.offline \nEnter our choice : ");


}

void engcourse()   //engineering courses
{
printf("\n1.CSE \n2.ECE \n3.EEE \n4.CIVIL \n5.MECH");
printf("\nany one : ");
scanf("%d",&course);
		if(course==1)
		printf("\nCSE");
		else if(course==2)
		printf("\nECE");
		else if(course==3)
		printf("\nEEE");
		else if(course==4)
		printf("\nCIVIL");
		else if(course==5)
		printf("\nMECH");
}

void scicourse()
{
printf("\n1.B.sc \n2.B.A \n3.B.com  \n4.BBA");
printf("\nany one :");
scanf("%d",&course);
		if(course==1)
		{
		printf("\nB.sc");
		printf("\n1. Physics \n2. Chemistry"
		"\n3. Mathematics \n4. Computer Science");
		printf("\nany one :");
		scanf("%d",&bsc);
			if(bsc==1)
			{
			printf("\nphysics");
			detail();
			}
			else if(bsc==2)
			{
			printf("\nchemistry");
			detail();
			}
			else if(bsc==3)
			{
			printf("\nmathematics");
			detail();
			}
			else
			{
			printf("\ncomputer science");
			detail();
			}
		}
		else if(course==2)
		{
		printf("\nB.A");
		printf("\n 1.Tamil \n 2.English \n 3.Hindi \n 4.Sanskrit");
		printf("\nany one :");
		scanf("%d",&ba);
			if(ba==1)
			{
			printf("\ntamil");
			detail();
			}
			else if(ba==2)
			{
			printf("\nenglish");
			detail();
			}
			else if(ba==3)
			{
			printf("\nhindi");
			detail();
			}
			else
			{
			printf("\nsanskrit");
			detail();
			}
		}
		else if(course==3)
		{
		printf("\nB.com");
		printf("\n 1.B.com(CA) \n 2.B.com(cs) \n 3.CA");
		printf("\nany one :");
		scanf("%d",&bcom);
			 if(bcom==1)
			{
			printf("\nb.com(CA)");
			detail();
			}
			else if(bcom==2)
			{
			printf("\nB.com(CS)");
			detail();
			}
			else
			{
			printf("\nCA");
			detail();
			}
		}
		else if(course==4)
		printf("\nBBA");

}
void eng()
{
printf("\nENGINNERING");
o:
printf("\n1.sit \n2.tce");
printf("\nchose any one : ");
scanf("%d",&clg);
	if(clg==1)
	{
		printf("\nSIT");
	}
	else if(clg==2)
	{
		printf("\nTCE");
	}
	else
	{
		printf("\nchoose the correct optaion");
		goto o;
	}

}

void sci()
{
printf("\nSCIENCE");
o:
printf("\n 1.Sourashtra College \n 2.Medura college"
	"\n 3.American college ");
printf("\nchose any one : ");
scanf("%d",&clg);
	if(clg==1)
	{
		printf("\nsourasthra college");
	}
	else if(clg==2)
	{
		printf("\nmedura college");

	}
	else if(clg==3)
	{
		printf("\namerican college");
	}
	else
	{
		printf("\nchoose the correct optaion");
		goto o;
	}


}

void detail()
{
printf("\n\t\tENTER YOUR DETAILS\t\t\n");
printf("\nEnter your name\t\t  :  ");
scanf("%s",&name);
printf("\nEnter your father name\t  :  ");
scanf("%s",fname);
printf("\nEnter your mather name\t  :  ");
scanf("%s",&mname);
printf("\nEnter your MAIL-ID\t  :  ");
scanf("%s",&mail);
printf("\nEnter your Mobile No\t  :  ");
scanf("%s",&no);
printf("\nEnter your DOB\t\t  :  ");
scanf("%s", &dob);
printf("\nEnter your school name\t  :  ");
for(i=0;i<=3;i++)
scanf("%s",&scl[i]);
printf("\nEnter your aadhar no\t  :  ");
scanf("%s",&aadhar);

clrscr();

printf("\nName \t\t :%s",name);
printf("\nfather name\t  :%s",fname);
printf("\nMother name\t  :%s",mname);
printf("\nMAIL-ID\t\t  :%s",mail);
printf("\nMobile no\t  :%s",no);
printf("\nDate Of Birth(DOB)  :%s",dob);
printf("\nschool name\t  :");
for(i=0;i<=3;i++)
printf(" %s",&scl[i]);
printf("\nAadhar no\t :%s",aadhar);

}

void main()
{
int mark;
clrscr();
om:
printf("\n1.ENGINEERING \n2.SCIENCE");
printf("\n any one  : ");
scanf("%d",&n);

	printf("\nEnter your mark(600) :  ");
	scanf("%d",&mark);

		if(300<=mark && 600>mark)
		{                  //condition start
		printf(" \n You are Eligble");
			if(n==1)
			{
				eng();
				online();
				scanf("%d",&onn);
				switch(onn)
				{
			       case 1:
				engcourse();
				detail();
				result();
				printf("\n");
				break;
				case 2:
				printf("\nCome to college");
				break;
				}

			}
			else
			{
			sci();
			online();
				scanf("%d",&onn);
				switch(onn)
				{
			       case 1:
				scicourse();

				sciresult();
				printf("\n");
				break;
				case 2:
				printf("\nCome to college");
				break;
				}

			}
		}

		else if(275<=mark && 300>mark)
		{
		printf("\nEligble for only science");
		sci();
		online();
				scanf("%d",&onn);
				switch(onn)
				{
			       case 1:
				scicourse();

				sciresult();
				printf("\n");
				break;
				case 2:
				printf("\nCome to college");
				break;
				}
		}

		else
		{
		printf("Not Eligible for enginnering");
		goto om;
		}                            //condition finish




getch();
}
