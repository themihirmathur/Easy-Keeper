//Pasword Generator/Manager
#include<dos.h> 
#include<time.h>
#include<conio.h> 
#include<stdio.h> 
#include<string.h> 
#include<iostream>
#include<fstream>

using namespace std;

class student{ 
    int rno; 
    char name[100]; 
    char branch[100]; 
    char batch[100]; 
    char password[20]; 
    int len; 
    int choice; 

    public: 
    void enter(){
        cout<<"\n enter roll no.: "; 
        cin>>rno; 
        cout<<"enter name: "; 
        fflush(stdin);
        gets(name); 
        cout<<"enter branch: "; 
        gets(branch); 
        cout<<"enter batch: "; 
        gets(batch); 
        cout<<"enter password length: "; 
        cin>>len; 
        cout<<"if u want to enter a password enter 1, if u want an auto generated password enter 2: "; 
        cin>>choice; 

        if(choice==1){
            cout<<"enter the password: "; 
            fflush(stdin);
            gets(password);
        }
        else if(choice==2){
            srand(time(0));
            int i; 
            for (i = 0; i < len; i++){
                password[i] = (rand() % (122 - 65 + 1)) + 65; 
            } 
            cout<<"\n Password: "<<password;
        }
    } 

    void show(){ 
        cout<<"\n roll no.: "<<rno; 
        cout<<"\n name: "<<name; 
        cout<<"\n branch: "<<branch; 
        cout<<"\n password: "<<password; 
        cout<<"\n batch: "<<batch; 
    } 

    int rrno(){
        return rno;
    } 

    char* rname(){
        return name;
    } }; 

    void Create(){
        char ch; 
        student ob; 
        fstream file1; 
        file1.open("stud.dat",ios::out|ios::binary);

        do{
            ob.enter(); 
            file1.write((char*) &ob, sizeof(ob)); 
            cout<<"\ndo u want to enter more records (y/n): ";  
            cin>> ch; 
        }while(ch=='y'||ch=='Y'); 

        file1.close(); 
    } 

    void Append(){
        char ch; 
        student ob; 
        fstream file1; 
        file1.open("stud.dat",ios::app|ios::binary); 
        do{
            ob.enter(); 
            file1.write((char*) &ob, sizeof(ob)); 
            cout<<"\ndo u want to enter more records (y/n): "; 
            cin>>ch; 
        }while(ch=='y'||'Y'); 

        file1.close(); 
    } 

    void display(){
        student ob;
        fstream file1; 
        file1.open("stud.dat",ios::in|ios::binary); 
        while(file1.read((char*) &ob, sizeof(ob))){
            ob.show(); 
        }    

        file1.close(); 
    } 

    void search(){
        int R,flag=0; 
        student ob; 
        fstream file1; 
        file1.open("stud.dat",ios::in|ios::binary); 
        cout<<"\n enter roll number to be searched: "; 
        cin>>R; 
        while(!file1.eof()){
            file1.read((char*) &ob, sizeof(ob)); 
            if (ob.rrno()==R) 
            {flag=1; ob.show(); 
            break;} 
        } 

        file1.close(); 
        if(flag==0) 
        cout<<"\n record not found!"; 
    } 

    void search2(){
        char sname[10]; 
        int flag=0; 
        student ob; 
        fstream file1; 
        file1.open("stud.dat", ios::in|ios::binary); 

        cout<<"\nenter the name to be searched: "; 
        fflush(stdin);
        gets(sname); 

        while(!file1.eof()){
            file1.read((char*) &ob, sizeof(ob)); 
            if(strcmp(ob.rname(),sname)==0){
                flag=1; 
                ob.show(); 
                break; 
            } 
        }

        file1.close(); 
        if(flag==0) 
        cout<<"\n record not found!"; 
    } 

    void modify(){
        int R,flag=0; 
        student ob; 
        fstream file1,file2; 
        file1.open("stud.dat",ios::in|ios::binary); 
        file2.open("temp.dat",ios::in|ios::binary); 
        cout<<"\n enter roll number to be modified: "; 
        cin>>R; 

        while(!file1.eof()){
            file1.read((char*) &ob, sizeof(ob)); 
            if(ob.rrno()==R){
                flag=1; 
                cout<<"\n enter new record: "; 
                ob.enter(); 
                file2.write((char*) &ob, sizeof(ob)); 
            } 
            else{
                file2.write((char*) &ob, sizeof(ob)); 
            }
        } 

        file1.close(); 
        file2.close(); 
        if(flag==1){
            remove("stud.dat"); 
            rename("temp.dat","stud.dat"); 
        } 
        else 
        cout<<"record not found!"; 
    } 

    void DEL(){
        int R,flag=0; 
        student ob; 
        fstream file1;
        fstream file2;
        file1.open("stud.dat",ios::in|ios::binary); 
        file2.open("temp.dat",ios::in|ios::binary); 
        cout<<"\n enter roll number to be deleted: "; 
        cin>>R; 

        while(!file1.eof()){
            file1.read((char*) &ob, sizeof(ob)); 
            if(ob.rrno()==R){
                flag=1;
            } 
            else 
            file2.write((char*) &ob, sizeof(ob)); 
        } 

        file1.close(); 
        file2.close(); 
        if(flag==1){
            remove("stud.dat"); 
            rename("temp.dat","stud.dat"); 
        } 
        else 
        cout<<"record not found"; 
    } 

    int main(){
        int ch; 
        do {
            system("cls"); 
            cout<<"\n 1-create "; 
            cout<<"\n 2-append "; 
            cout<<"\n 3-display "; 
            cout<<"\n 4-roll number wise search "; 
            cout<<"\n 5-name wise search "; 
            cout<<"\n 6-modify "; 
            cout<<"\n 7-delete "; 
            cout<<"\n enter choice: "; 
            cin>>ch; 

            switch(ch){
                case 1 :Create(); 
                break; 

                case 2 :Append(); 
                break; 
                
                case 3 :display(); 
                break; 

                case 4 :search(); 
                break; 

                case 5 :search2(); 
                break; 

                case 6 :modify(); 
                break; 

                case 7 :DEL();  
                break;

                default:cout<<" wrong choice!"; 
            } 

            getch(); 
        }while(ch>=1 && ch<=7);

        return 0;
}