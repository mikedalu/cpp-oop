#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print_menu(string name);
void print_list();
void add_item();
void delete_item();
void print_choice();
void print_angle();
// This is a simple hello world program that takes a name as an argument
vector<string> list;
string name;

int main(int arg_count, char *args[]) {
  cout<< "Hello world" <<endl;
  print_angle();
  if(arg_count > 1){
    name = string(args[1]);
    print_menu(name); 
  

  }  else{
    cout<< "User not supplied. exiting the program " <<endl;
  }
    return 0;
}
void print_menu(string name){
  int choice;
  cout << "****************************\n";
  cout << "1 - Print All Lists\n";
  cout << "2 - Add to list\n";
  cout << "3 - Delete from List";
  cout <<" 4 - Quit \n";
  cout << "Select your choice and press Enter/Return \n";

  cin >> choice;
  if(choice == 4){
    exit(0);
  } else if(choice == 1){
    print_list();
  } else if(choice == 2){
    add_item();
  } else if(choice == 3){
    delete_item();
  } else{
    cout << "Invalid choice" << endl;
  }
  

}

void add_item(){
  string item;
  cout << "Enter the item to add to the list: \n";
   cin >> item;
  list.push_back(item);
  
  cout << "Item added to the list" << endl;
  print_choice();
}

void delete_item(){
   if(list.size() == 0){
    cout << "List is empty" << endl;
    return; 
  for(unsigned int i = 0; i < list.size(); i++){
    cout << i << " - " << list[i] << endl;
    cout << "Enter the index of the item to delete: \n";
    if(i == list.size()){
      cout << "Item not found in the list" << endl;

      print_choice();
    } else{
      cout << "Item deleted from the list" << endl;
      list.erase(list.begin() + i);
      print_choice();
    }
  }
  cout << "Item not found in the list" << endl;
 
}

  cout << "List is empty" << endl;
  return;
}

void print_list(){
  if(list.size() == 0){
    cout << "List is empty" << endl;
    return;
  }
  cout << "List of items: \n";
  for(unsigned int i = 0; i < list.size(); i++){
    cout << i << " - " << list[i] << endl;
  }
  print_choice();
 
}


void print_choice(){
   cout<< "M - Menu \n";
  char choice;
  cin >> choice;
  if(choice == 'M' || choice == 'm'){
    print_menu(name);
  } else{
    cout << "Invalid choice" << endl;

  }
}

void print_angle(){
  cout << "Enter the  number of lines to pring: \n";
  int lines;
  cin >> lines;
  for(int i = 1; i <= lines; i++){
    for(int j = 1; j <= i; j++){
      cout << "*";
    }
    cout << endl;
  }
}