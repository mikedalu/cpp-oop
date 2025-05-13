#include "include/list.h"
void List::print_menu(){
  int choice;
  cout << "****************************\n";
  cout << "1 - Print All Lists\n";
  cout << "2 - Add to list\n";
  cout << "3 - Delete from List";
  cout <<" 4 - Quit \n";
  cout << "Select your choice and press Enter/Return \n";

  cin >> choice;
  if(choice == 4){
    return;
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

void List::add_item(){
  string item;
  cout << "Enter the item to add to the list: \n";
   cin >> item;
  list.push_back(item);
  
  cout << "Item added to the list" << endl;
  print_choice();
}

void List::delete_item(){
   cout<< "Delete Item *** \n";
    cout<< "Enter the index of the item to delete: \n";

    if(list.size()){
      for(unsigned int i = 0; i < list.size(); i++){
        cout << i << " - " << list[i] <<endl;
      }

    }
    int choiceNum;
    cin >> choiceNum;
    list.erase(list.begin()+choiceNum);
    cout << "Item deleted from the list" << endl;
    print_choice();
  
}

void List::print_list(){
  if(list.size() == 0){
    cout << "List is empty" << endl;
    print_choice();
    return;
  }
  cout << "List of items: \n";
  for(unsigned int i = 0; i < list.size(); i++){
    cout << i << " - " << list[i] << endl;
  }
  print_choice();
 
}


void List::print_choice(){
   cout<< "M - Menu \n";
  char choice;
  cin >> choice;
  if(choice == 'M' || choice == 'm'){
    print_menu();
  } else{
    cout << "Invalid choice" << endl;
    print_choice();

  }
}
