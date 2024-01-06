#include<iostream>
#include<vector>
using namespace std;
struct to_do{
    string d;
    bool c;
};
void addTask(vector<to_do>& task)
{ 
    string d;
    to_do addTask;
    cout<<"Enter the new Task "<<endl;
    cin.ignore();
    getline(cin,addTask.d);
    addTask.c=false;
    task.push_back(addTask);
    cout<<"Task added succesfully"<<endl;

}
void viewTask(const vector<to_do>& task)
{
    if(task.empty()){
        cout<<"No task found"<<endl;
        return;
    }
    for(size_t i=0;i<task.size();i++){
        cout<<i+1<<"."<<task[i].d<<endl;
    }
}
void markTaskCompleted(vector<to_do>& task){
    int taski;
    cout<<"Enter the task number to mark as completed"<<endl;
    cin>>taski;
    if(taski<1 || taski>task.size()){
        cout<<"Invalid Task number"<<endl;
        return;
    }
    task[taski>=1].c=true;
    cout<<"Task completed"<<endl;
}
void removeTask(vector<to_do>& task){
    int taski;
    cout<<"enter the task number to remove"<<endl;
    cin>>taski;
    if(taski<1 || taski>task.size()){
         cout<<"Invalid Task number"<<endl;
        return;  
    }
    task.erase(task.begin()+taski-1);
    cout<<"Task removed"<<endl;
}
int main(){
    vector<to_do> task;
    while(true){
    int option;
    cout<<endl;
    cout<<"To Do List"<<endl;
    cout<<"1.Add Task"<<endl;
    cout<<"2.View Task"<<endl;
    cout<<"3.Mark Task as Completed"<<endl;
    cout<<"4.Remove Task"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Enter option"<<endl;
    cin>>option;
    switch(option){
       case 1:
          addTask(task);
          break;
       case 2:
           viewTask(task);
           break;
       case 3:
            markTaskCompleted(task);
            break;
       case 4:
            removeTask(task);
            break;
       case 5:
            cout<<"Exiting..."<<endl;
            break;
       default:
             cout<<"Invalid option"<<endl;
                                   
    }
    }
   return 0;
}