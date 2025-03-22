#include<iostream>
#include<algorithm>
#include"functions.h"
using namespace std;
void DisplayCharacteristic(string line){
    size_t pos1=line.find(',');
    size_t pos2=line.find(',',pos1+1);
    cout<<"Name : "<<line.substr(0,pos1)<<"\n";
    cout<<"Age : "<<line.substr(pos1+1,pos2-pos1-1)<<"\n";
    cout<<"Name : "<<line.substr(pos2+1)<<"\n";
    cout<<"...................\n";
}
void DisplayError(){
    cout<<"Student with this characteristic doesnt exist in this data base.\n";
}
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}