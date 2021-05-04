#include <iostream> 
#include <conio.h> 
#include <string> 
using namespace std; 
 
string subj(int); 
double credit; 
double caltimes = 0; 
double totalcal = 0; 
double totalcredit = 0; 
double finalgpa = 0; 
float gpa(int); 
string remark(float); 
string grade(float); 
double final(int); 
int main() 
{ 
  string name; 
   
 float roll_no; 
 cout <<"_____________________________________________________________________\n"; 

 
 cout << "\t\t\tGPA CALCULATOR\n"; 
 cout <<"_____________________________________________________________________\n"; 
 cout << "ENTER NAME:"; 
 cin>>name; 
 cout << "Enter ROLL NUMBER:"; 
 cin >> roll_no; 
 int b=0,mark[4]; 
 int marks; 
 string sub,grad,remak; 
 double finals; 
 float Gpa,gp; 
 for(int i=0;i<=4;i++) 
 { 
  b++; 
  sub=subj(b); 
  cout<<endl; 
  cout<<"Enter Your marks of "<<sub<<": "; 
  cin>>mark[i]; 
  cout<<"Enter Credit hours of "<<sub<<": "; 
  cin>>credit; 
   
 } 
 cout<<"\n_______________________________________________________________ _________________\n"; 
 cout<<"Sr.\tCourses\t\tObt.Marks\tPercentage\tGrade\tGPA\tRemark"; 
 b=0; 
 for(int i=0;i<=4;i++) 
 { 
  b++; 
     marks=mark[i]; 
  sub=subj(b); 
  Gpa=gpa(marks); 
  grad=grade(Gpa); 
  remak=remark(Gpa); 
 
 cout<<endl<<i+1<<"\t"<<sub<<"\t"<<marks<<"\t\t"<<marks<<"%\t\t"<<grad<< "\t"<<Gpa<<"\t"<<remak; 
 } 
 
 finals=final(marks); 
 cout<<endl; 
 cout<<"------------------\n"; 
 cout<<"Total GPA is:"<<finals<<endl; 
 cout<<"-------------------"; 
  
} 
string remark(float Gpa) 
{ 
 string rem; 
 if(Gpa==4.0) 
  rem="Excellent"; 
 if(Gpa==3.75) 
  rem="Very Good"; 
 if(Gpa==3.50)  
  rem="Good"; 
 if(Gpa==3.0) 
  rem="Satisfactory"; 
 if(Gpa==2.50) 
  rem="Above Average"; 
 if(Gpa==2.0) 
  rem="Average"; 
 if(Gpa==1.50) 
  rem="Pass"; 
 if(Gpa==1.0) 
  rem="Just Pass"; 
 if(Gpa==0) 
  rem="Fail"; 
 return rem; 
} 
string grade(float Gpa){ 
 string gra; 
 if(Gpa==4) 
  gra="A+"; 
 if(Gpa==3.75) 
  gra="A-"; 
 if(Gpa==3.50)  
  gra="B+"; 
 if(Gpa==3.0) 
  gra="B-"; 
 if(Gpa==2.50) 
  gra="C+"; 
 if(Gpa==2.0) 
  gra="C-"; 
 if(Gpa==1.50) 
  gra="D+"; 
 if(Gpa==1.0) 
  gra="D-"; 
 if(Gpa==0) 
  gra="F"; 
 return gra; 
} 
float gpa(int marks){ 
 float gp; 
 if(marks>=90&&marks<=100){ 
  
  gp=4; 
  caltimes=4*credit;} 
 if(marks>=80&&marks<=89){ 
  
   gp=3.75; 
   caltimes=credit*3.75;} 
 if(marks>=75&&marks<=79){ 
  
   gp=3.50; 
   caltimes=credit*3.50;} 
 if(marks>=70&&marks<=74){ 
  
   gp=3.0; 
   caltimes=credit*3.0;} 
 if(marks>=65&&marks<=69){ 
  
   gp=2.50; 
   caltimes=credit*2.50;} 
 if(marks>=60&&marks<=64){ 
  
   gp=2.0; 
   caltimes=credit*2.0;} 
 if(marks>=55&&marks<=59){ 
  
   gp=1.50; 
   caltimes=credit*1.50;} 
 if(marks>=50&&marks<=54){ 
  
   gp=1.0; 
   caltimes=credit*1.0;} 
 if(marks>=0&&marks<=49){ 
  
   gp=0; 
   caltimes=credit*0;} 
  
 return gp; 
} 
 string subj(int b) 
{ 
 string subject; 
 if(b==1) 
  subject="CS-126: ICT"; 
 if(b==2) 
  subject="MS-110: Physics"; 
 if(b==3) 
  subject="MS-108: algebra"; 
 if(b==4) 
  subject="CS-116: P.F"; 
    if(b==5) 
        subject="HS-103: P.S.T"; 
  return subject; 
} 
double final(int marks) 
{ 
float gp; 
 if(marks>=90&&marks<=100){ 
  
  gp=4; 
  caltimes=4*credit;} 
 if(marks>=80&&marks<=89){ 
  
   gp=3.75; 
   caltimes=credit*3.75;} 
 if(marks>=75&&marks<=79){ 
  
   gp=3.50; 
   caltimes=credit*3.50;} 
 if(marks>=70&&marks<=74){ 
  
   gp=3.0; 
   caltimes=credit*3.0;} 
 if(marks>=65&&marks<=69){ 
  
   gp=2.50; 
   caltimes=credit*2.50;} 
 if(marks>=60&&marks<=64){ 
  
   gp=2.0; 
   caltimes=credit*2.0;} 
 if(marks>=55&&marks<=59){ 
  
   gp=1.50; 
   caltimes=credit*1.50;} 
 if(marks>=50&&marks<=54){ 
  
   gp=1.0; 
   caltimes=credit*1.0;} 
 if(marks>=0&&marks<=49){ 
  
   gp=0; 
   caltimes=credit*0;} 
    
 totalcredit = totalcredit + credit; 
    totalcal = totalcal + caltimes; 
 finalgpa = totalcal/totalcredit; 
  
 return finalgpa; 
}
 
 

