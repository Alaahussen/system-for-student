#include<iostream>
#include<conio.h>
using namespace std;
int i=0;
class student{
    int id[5];
    char name[5][50];
    char grade[5];
    float marks[5],per[5];
 public:
     student(){
         system("cls");
         cout<<"\n\n\t\t\t****STUDENT MANAGEMENT SYSYEM****";
     }
 void insert_s(){
     system("cls");
 cout<<"\n\n\t\t\t *** Insert Result ***";
 cout<<"\n\n Enter student Id: ";
 cin>>id[i];
cout<<"\n\n Enter student name: ";
    cin.get();
    cin.getline(name[i],50);
 cout<<"\n\n Enter student marks: ";
 cin>>marks[i];
 per[i]=(marks[i]/100)*100;
 if(per[i]>=85)
  grade[i]='A';
 else if(per[i]>=75)
   grade[i]='B';
 else if(per[i]>65)
     grade[i]='C';
else if(per[i]>=50)
    grade[i]= 'D';
else
    grade[i]= 'F';
cout<<"\n\n *** Insert record sucessfully****";
i++;
 }
 void search_s(){
 system("cls");
 cout<<"\n\n\t\t\t *** SEARCH RECORD ***";
 if(i==0)
    cout<<"\n\n NO record found";
 else{
        int id_n,found;
        cout<<"\n\n Enter student id: ";
        cin>>id_n;
        for(int a=0;a<i;a++){
            if(id_n==id[a]){
            cout<<"\n\n student name: "<<name[a];
            cout<<"\n\n student marks: "<<marks[a];
            cout<<"\n\n student precantage: "<<per[a]<<"%";
            cout<<"\n\n grade: "<<grade[a];
            found++;
            }
        }
        if(found==0){
            cout<<"\n\n *** Student Id not Found ***";
        }

 }
 }
 void update_s(){
      system("cls");
 cout<<"\n\n\t\t\t *** update RECORD ***";
 if(i==0)
    cout<<"\n\n NO record found";
 else{
        int id_n,found;
        cout<<"\n\n Enter student id: ";
        cin>>id_n;
        for(int a=0;a<i;a++){
            if(id_n==id[a]){
                 cout<<"\n\n Enter student Id: ";
                cin>>id[a];
                cout<<"\n\n Enter student name: ";
                 cin.get();
                cin.getline(name[a],50);
                cout<<"\n\n Enter student marks: ";
                    cin>>marks[a];
               per[a]=(marks[a]/100)*100;
 if(per[a]>=85)
    grade[a]='A';
 else if(per[a]>=75)
    grade[a]= 'B';
 else if(per[a]>65)
     grade[a]='C';
else if(per[a]>=50)
    grade[a]= 'D';
else
    grade[a]= 'F';

            found++;
            }
        }
        if(found==0){
            cout<<"\n\n *** Student Id not Found ***";
        }

 if(found>0)
 cout<<"\n\n *** update record sucessfully****";
 }
 }
 void  delete_s(){
   system("cls");
 cout<<"\n\n\t\t\t *** delete RECORD ***";
 if(i==0)
    cout<<"\n\n NO record found";
   else{
        int id_n,found;
        cout<<"\n\n Enter student id: ";
        cin>>id_n;
        for(int a=0;a<i;a++){
            if(id_n==id[a]){
                for(int m=a;m<i-1;m++){
                for(int j=0;j<50;j++){
                    name[m][j]=name[m+1][j];
                }
                    id[m]=id[m+1];
                    marks[m]=marks[m+1];
                    per[m]=per[m+1];
                    grade[m]=grade[m+1];
                }
                cout<<"\n\n ***Delete record sucessful***";
                found++;
                i--;
            }
        }

  if(found==0){
            cout<<"\n\n *** Student Id not Found ***";
        }
 }
 }
 void show(){
   system("cls");
    cout<<"\n\n\t\t\t *** SHOW ALL RECORD ***";

 if(i==0)
    cout<<"\n\n NO record found";
  else{
    for(int a=0;a<i;a++){
        cout<<"\n\n student id: "<<id[a];
         cout<<"\n\n student name: "<<name[a];
        cout<<"\n\n student marks: "<<marks[a];
        cout<<"\n\n student precantage: "<<per[a]<<"%";
        cout<<"\n\n grade: "<<grade[a];
        cout<<"\n\n********************************"<<endl;
    }
  }
 }
};
int main(){
    p:
    system("cls");
    student s;
    int choice;
    cout<<"\n\n 1.insert record";
    cout<<"\n\n 2.search record";
    cout<<"\n\n 3.update record";
    cout<<"\n\n 4.delete record";
    cout<<"\n\n 5.show data";
    cout<<"\n\n 6.exit";
    cout<<"\n\n enter your choice ";
    cin>>choice;
    switch(choice){
        case 1:
            s.insert_s();
            break;
         case 2:
             s.search_s();
            break;
         case 3:
             s.update_s();
            break;
         case 4:
             s.delete_s();
            break;
         case 5:
             s.show();
            break;
         case 6:
            return 0;
         default:
            cout<<"\n\n *** invalid choice***"<<endl;
    }
    getch();
    goto p;

return 0;
}
