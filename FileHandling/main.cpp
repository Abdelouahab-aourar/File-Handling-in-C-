#include<iostream>
#include<algorithm>
#include<fstream>
#include<cstdlib>
#include"functions.h"
using namespace std;
int main(){
    cout<<".~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.~.\n";
    cout<<"Choose one of the options : \n";
    cout<<"1.Search by name.\n";
    cout<<"2.Search by age.\n";
    cout<<"3.Search by school.\n";
    cout<<"4.Exit.\n";
    int option;
    cin>>option;
    if(option==4)exit(0);
    cout<<"Enter The Keyword : \n";
    string keyword;
    cin>>keyword;
    bool found=false;
    string name;
    int age;
    string school;
    ifstream data;
    data.open("data.csv");
    string line;
    if(option==1){
    while(getline(data,line)){
        size_t pos=line.find(',');
        name=toLower(line.substr(0,pos));
        if(name.find(toLower(keyword))!=std::string::npos){
            found=true;
            DisplayCharacteristic(line);
        }
    }
    if(!found)DisplayError();}
     else if(option==2){
        while(getline(data,line)){
        size_t pos1=line.find(',');
        size_t pos2=line.find(',',pos1+1);
        age=2025-stoi(line.substr(pos1+1,pos2-pos1-1));
        if(age==stoi(keyword)){
            found=true;
            DisplayCharacteristic(line);
        }
    }
    if(!found)DisplayError();}
    else if(option==3){
        while(getline(data,line)){
        size_t pos1=line.find(',');
        size_t pos2=line.find(',',pos1+1);
        school=toLower(line.substr(pos2));
        if(school.find(toLower(keyword))!=std::string::npos){
            found=true;
            DisplayCharacteristic(line);
        }
    }
    if(!found)DisplayError();}
    else cout<<"Please choose one of the options.\n";

}