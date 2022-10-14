#include<stdio.h>
int main()
{float rollno,maths,english,science,social,computer,i,gpasum,classm,mathsm,englishm,sciencem,socialm, computerm,marksum,tgpa;
char grades, name[30];
printf("Enter your first name only:\n");
scanf("%s",&name);
printf("Enter your roll number:\n");
scanf("%f",&rollno);
     for (i = 0; i < 5; i++)
     {
     printf("enter your marks in maths\n");
    scanf("%f",&maths);
    
    if (maths>=90 && maths<=100) {
        mathsm=4;
        i=6; }
    else if (maths>=80 && maths<=89){
        mathsm=3.6;
        i=6;}
    else if (maths>=70 && maths <=79){
        mathsm = 3.2;
        i=6;
       }
    else if (maths>=60 && maths<=69){
    mathsm =2.8;
    i=6;}
else if (maths>=50 && maths<= 59){
        mathsm = 2.4;
        i=6; }
    else if (maths>=40 && maths<=49){
        mathsm = 2;
        i=6;}
    else if ( maths >=30 && maths <=39){
        mathsm = 1.6;
        i=6;}
    else if (maths >=20 && maths <=29){
        mathsm =1.2;
        i=6;}
    else if (maths>=0 && maths<=19){
    mathsm = 0.8;
    i=6;}
else 
{printf("wrong input \n");
    mathsm=0;}
}

 for (i = 0; i < 5; i++)
     {printf("enter your marks in english \n ");
    scanf("%f",&english);
    if (english>=90 && english<=100) {
        englishm=4;
        i=6;}
    else if (english>=80 && english<=89){
        englishm=3.6;
        i=6;}
    else if (english>=70 && english<=79){
        englishm= 3.2;
        i=6;}
    else if (english>=60 && english<=69){
    englishm =2.8;
    i=6;}
   else if (english>=50 && english<= 59){
        englishm= 2.4;
        i=6; }
    else if (english>=40 && english<=49){
        englishm = 2;
        i=6;}
    else if ( english>=30 && english <=39){
        englishm = 1.6;
        i=6;}
    else if (english >=20 && english <=29){
        englishm=1.2;
        i=6; }
    else if (english>=0 && english<=19){
    englishm = 0.8;
    i=6;}
else 
{printf("wrong input \n");
    englishm=0;}
   }
     for (i = 0; i < 5; i++)
     {
    printf("enter your marks in science \n");
    scanf("%f",&science);
     
    if (science>=90 &&science <=100) {
        sciencem=4;
        i=6;}
    else if (science>=80 && science<=89){
       sciencem=3.6;
        i=6; }
    else if (science>=70 && science<=79){
       sciencem= 3.2;
        i=6;}
    else if (science>=60 && science<=69){
    sciencem =2.8;
    i=6;}
else if (science>=50 && science<= 59){
        sciencem= 2.4;
        i=6;}
    else if (science>=40 && science<=49){
       sciencem = 2;
        i=6;}
    else if ( science>=30 && science <=39){
        sciencem= 1.6;
        i=6;}
    else if (science >=20 && science <=29){
        sciencem=1.2;
        i=6; }
    else if (science>=0 &&science<=19){
    sciencem = 0.8;
    i=6;}
else 
{printf("wrong input \n");
   sciencem=0; }
for (i = 0; i < 5; i++)
{printf("enter your marks in social \n");
    scanf("%f",&social);
      
    if (social>=90 &&social <=100) {
       socialm=4;
        i=6;}
    else if (social>=80 && social<=89){
      socialm=3.6;
        i=6;}
    else if (social>=70 && social<=79){
      socialm= 3.2;
        i=6; }
    else if (social>=60 && social<=69){
   socialm=2.8;
    i=6;}
 else if (social>=50 && social<= 59){
        socialm= 2.4;
        i=6;}
    else if (social>=40 && social<=49){
       socialm= 2;
        i=6;}
    else if ( social>=30 && social <=39){
       socialm= 1.6;
        i=6; }
    else if (social >=20 && social<=29){
        socialm=1.2;
        i=6;}
    else if (social>=0 &&social<=19){
    socialm = 0.8;
    i=6;
}
else 
{ printf("wrong input \n");
   socialm= 0; }}

 for ( i = 0; i < 5; i++)
 {
    printf("enter your marks in computer\n");
    scanf("%f",&computer);
    if (computer>=90 &&computer<=100) {
       computerm=4;
        i=6;}
    else if (computer>=80 && computer<=89){
      computerm=3.6;
        i=6;}
    else if (computer>=70 && computer<=79){
      computerm= 3.2;
        i=6;}
    else if (computer>=60 && computer<=69){
   computerm=2.8;
    i=6;}
 else if (computer>=50 && computer<= 59){
        computerm= 2.4;
        i=6;}
    else if (computer>=40 && computer<=49){
       computerm= 2;
        i=6;}
    else if ( computer>=30 && computer <=39){
       computerm= 1.6;
        i=6;}
    else if (computer >=20 && computer<=29){
        computerm=1.2;
        i=6;}
    else if (computer>=0 &&computer<=19){
    computerm = 0.8;
    i=6;
}
else 
{ printf("wrong input \n");
    computerm=0;
   }   }
tgpa=mathsm+englishm+sciencem+socialm+computerm;
gpasum=(tgpa)/5;

marksum= maths+english+science+social+computer;
   
printf("-----------------Marksheet ----------------\n");
printf("Student Name:   %s \n",name);
printf("Rollno:  %f\n",rollno);
printf("Subject             Marks                 GPA\n");
printf("Maths               %f             %f\n",maths,mathsm);
printf("Social              %f             %f\n",social,socialm);
printf("Science             %f             %f\n",science,sciencem);
printf("Computer            %f             %f\n",computer,computerm);
printf("English             %f             %f\n",english,englishm);
printf("Total:              %f             %f\n",marksum,gpasum);


 
if (gpasum>3.6 &&gpasum<=4) {
 printf(" Congratulation you have secured +A\n");
 printf("Advice:You have done alot of hardwork .Keep it up .\n");
 }
    else if (gpasum>3.2 && gpasum<=3.6){
      printf("Congratulation you have secured A\n");
      printf("Advice:Very good, you have done a great job . Keep it up.\n");
        }
    else if (gpasum>2.8 && gpasum<=3.2){
      printf("Congratulation you have secured +B\n");
      printf("Advice:You have done good but you can also improve a little.\n");
        }    
    else if (gpasum>2.4 && gpasum<=2.8){
      printf("Congratulation you have secured B\n");
      printf("Advice:Not bad but you can work more.\n");
        }
    else if (gpasum>2 && gpasum<=2.4){
      printf("Congratulation you have secured C+\n");
      printf("Advice:Lack of hardwork is seen.\n");
        }
    else if (gpasum>1.6 && gpasum<=2){
      printf("Congratulation you have secured C\n");
      printf("Advice:We recommend you to join extraclass.\n");
        }
    else if (gpasum>1.2 && gpasum<=1.6){
      printf("Congratulation you have secured +D\n");
      printf("Advice:We recommend you to join extraclass.\n");
        }
    else if (gpasum>0.8 && gpasum<=1.2){
      printf("Congratulation you have secured D\n");
       printf("Advice:We recommend you to join extraclass.\n");
        }
    else {
    printf("Congratulation you have secured E\n"); 
     printf("Advice:You have to try again next year\n");   }      
 }
 return 0;
 }