#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int hr()
	{
		int g,h;
				g=178;
				printf("\n");
				for(h=1;h<=42;h++)
				printf("%c",g);
				for(h=1;h<=10;h++)
				printf("%c",177);
				for(h=1;h<=5;h++)
				printf("%c",219);
				printf("\n");
	}

	
srow()
	{
	int i;
	printf("  ");
		for(i=1;i<=5;i++)
		{
			printf("%c ",176);
		}
	}

nrow()
	{
	int i;
	printf("  ");
	for(i=1;i<=5;i++)
		{
			printf("%c ",219);
		}
	}

	void main()
		{
			int b,c,d,e,f,g,h,i,j,k,r,s,m,x;
			char cc;
			int a[20][25];
			int y[20];
			int roll,rn,sn,sections,ch,ts,fm,tm,sl,tr,ir,row,seat;
			st2:
			first:
			top3:
			fr2:
			hr();
			printf("\n\n WELCOME TO SEAT ALLOCATION PLAN \n ");
			printf("\n__________________________________________\n");
			printf("\n\n 1. SEARCH BY ID");
			printf("\n\n 2. FULL DIRECTORY");
			printf("\n\n 3. AUDITORIUM OUTLINE");
			printf("\n\n 4. EXIT");
			printf("\n\n__________________________________________\n");
			printf("\n\n ENTER YOUR CHOICE  ");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
				b=5;
				hr();
				printf("\n %c FIRST ROW IS SPECIAL ROW FOR GUESTS OR FACULTY MEMBERS CALLED 'SROW'",b);
				printf("\n\n %c AUDITORIUM SEATS = 525 ",b);
				printf("\n %c ROWS AVAILABLE   = 26 [ SROW + (A1 TO T1) ]",b);
				printf("\n %c SEATS PER ROW    = 25 (A1 TO A25)\n",b);
				hr();
				printf("\n %c STUDENTS IN EACH SECTION = 50 ",b);
				printf("\n %c CHOOSE YOUR SECTION NUMBER ",b);
				printf("\n__________________________________________\n");
				printf("\n 1. CSE1A \t  6. CSE1B ");
				printf("\n 2. CSE2A \t  7. CSE2B ");
				printf("\n 3. CSE3A \t  8. CSE3B ");
				printf("\n 4. CSE4A \t  9. CSE4B ");
				printf("\n 5. CSE5A \t 10. CSE5B \n ");
				num:
				se:
				hr();
				printf("\n\n ENTER TOTAL SECTIONS REQUIRED IN AUDITORIUM : ");
				scanf("%d",&sections);
				if(sections==0)
				{
					goto top3;
				}
				if((sections<11)&&(sections>(-1)))
				{
				printf("\n__________________________________________\n");
				for(c=1,m=0,r=m+2,row=65;c<=sections;c++,r=r+2)
				{
				printf("\n\n CHOOSE SECTION NUMBER RESPECTIVELY : ");
						scanf("%d",&sn);
						switch(sn)	
						{
							case 1:
							printf("\n CSE1A - 50 Students \n ");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
								
									k++;
								}
							}
							break;
							
							case 2:
							printf("\n CSE2A - 50 Students \n ");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									
									k++;
								}
							}
						
							break;
							
							case 3:
							printf("\n CSE3A - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 4:
							printf("\n CSE4A - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 5:
							printf("\n CSE5A - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 6:
							
							printf("\n CSE1B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 7:
							printf("\n CSE2B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 8:
							printf("\n CSE3B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 9:
							printf("\n CSE4B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							case 10:
							printf("\n CSE5B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							printf("\n__________________________________________\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									k++;
								}
							}
							break;
							
							default:
							printf("\n INVALID ENTRY \n");
							goto num;
						}
				}
				}
				else
				{
				printf("\n INVALID ENTRY \n");
				goto se;
				}
				hr();
				up:
					printf("\n ENTER NUMBER OF GUESTS AND FACULTY MEMBERS : ");
					scanf("%d",&fm);
					if(fm>25)
					{
						printf("\n !! ONLY 25 SEATS ARE AVAILABLE \n ");
						printf("\n__________________________________________\n");
						goto up;
					}
					for(x=1;x<=fm;x++)
					{
						printf("\n ENTER %d MEMBER ID : ",x);
						scanf("%d",&y[x]);
					}
					if(fm<25)
					{
						hr();
						printf("\n SEATS FOR FACULTY MEMEBERS ARE : \n");
						for(j=1;j<=fm;j++)
						{
						printf(" \n SROW SEAT %d : %d",j,y[j]);
						}
					}
					printf("\n");
					tm=0;
					ts=50;
					ts=ts*sections;	//Total students
					tm=ts+fm;	
					sl=525-tm; // Seats lefts
					printf("\n SEATS FILLED     = %d ",tm);
					printf("\n SEATS STILL LEFT = %d \n",sl);
				hr();
					st:
					printf("\n ENTER ROLL NUMBER FOR SEARCH ");
					scanf("%d",&rn);
					for(i=0;i<20;i++)
					{
						for(j=0;j<25;j++)
						{
							if(rn==0)
							goto first;
							else if((a[i][j]!=rn)||(rn<1000))
							continue;
							else
							{
								hr();
								printf("\n '%d' IS PRESENT AT SEAT = '%c%d'  \n",rn,i+65,j+1);
								printf("\n PRESS '0' FOR EXIT");
								printf("\n__________________________________________\n");
							}
											
						}
					}
					goto st;
					break;
					
				case 2:
				b=5;
				hr();
				printf("\n %c AUDITORIUM SEATS = 525 ",b);
				printf("\n %c ROWS AVAILABLE   = 20 (A1 TO T1)",b);
				printf("\n %c SEATS PER ROW    = 25 (A1 TO A25)\n",b);
				hr();
				printf("\n %c STUDENTS IN EACH SECTION = 50 ",b);
				printf("\n %c CHOOSE YOUR SECTION NUMBER ",b);
				printf("\n__________________________________________\n");
				printf("\n 1. CSE1A \t  6. CSE1B ");
				printf("\n 2. CSE2A \t  7. CSE2B ");
				printf("\n 3. CSE3A \t  8. CSE3B ");
				printf("\n 4. CSE4A \t  9. CSE4B ");
				printf("\n 5. CSE5A \t 10. CSE5B \n ");
				num2:
				up2:
				hr();
				printf("\n\n ENTER TOTAL SECTIONS REQUIRED IN AUDITORIUM : ");
				scanf("%d",&sections);
				if((sections>10)||(sections<0))
				{
					printf("\n INVALID ENTRY \n");
					goto up2;
				}
				printf("\n__________________________________________\n");
				for(c=1,m=0,r=m+2,row=65;c<=sections;c++,r=r+2)
				{
				printf("\n\n CHOOSE SECTION NUMBER RESPECTIVELY : ");
						scanf("%d",&sn);
						switch(sn)	
						{
							case 1:
							printf("\n CSE1A - 50 Students \n ");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 2:
							printf("\n CSE2A - 50 Students \n ");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 3:
							printf("\n CSE3A - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 4:
							printf("\n CSE4A - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 5:
							printf("\n CSE5A - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 6:
							
							printf("\n CSE1B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 7:
							printf("\n CSE2B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 8:
							printf("\n CSE3B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 9:
							printf("\n CSE4B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							case 10:
							printf("\n CSE5B - 50 Students \n");
							k=1001+(50*sn);
							printf(" %d - %d \n ",k-50,k-1);
							hr();
							printf("\n");
							for(i=m;i<r;i++,row++,m++)
							{
								for(j=0,s=1;j<25;j++,s++)
								{
									a[i][j]=k-50;
									printf("%c%d = %d \n",row,s,a[i][j]);
									k++;
								}
							}
							hr();
							break;
							
							default:
							printf("\n INVALID ENTRY \n");
							goto num2;
						}
					}
					goto fr2;
					break;
					
					case 3:
					hr();
					int plus,sv2;
					char sv;
					printf("\n SPECIAL ROW FOR FACULTY OR GUESTS = %c %c %c ",176,176,176); 
					printf("\n\n NORMAL ROW FOR STUDENTS \t   = %c %c %c \n\n\n\n",219,219,219);
					srow(); srow(); srow(); srow(); srow();
					printf(" %c SPECIAL ROW %c\n\n",91,93);
					
					for(plus=65;plus<72;plus++)
					{
					nrow(); nrow(); nrow(); nrow(); nrow();
					printf(" %c %c1-25%c\n\n",plus,40,41);
					}
					printf(" PRESS ANY KEY \n\n");
					getch();
					
					{
						for(plus=72;plus<85;plus++)
						{
						nrow(); nrow(); nrow(); nrow(); nrow();
						printf(" %c %c1-25%c\n\n",plus,40,41);
						}
					}
					goto st2;
					break;
				
					case 4:
					hr();
					printf("\n PRESS ANY KEY  ");
					break;
					
					default:
					printf("\n__________________________________________\n");
					printf("\n INVALID CHOICE ");
			}
		getch();
		}
