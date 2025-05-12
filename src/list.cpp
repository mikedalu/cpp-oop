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

void List::add_item(){
  string item;
  cout << "Enter the item to add to the list: \n";
   cin >> item;
  list.push_back(item);
  
  cout << "Item added to the list" << endl;
  print_choice();
}

void List::delete_item(){
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
      int choiceNum;
      cin >> choiceNum;
      if(choiceNum < 0 || choiceNum >= list.size()){
        cout << "Invalid index" << endl;
        print_choice();
      }
      cout << "Deleting item at index " << choiceNum << endl;
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

void List::print_list(){
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


void List::print_choice(){
   cout<< "M - Menu \n";
  char choice;
  cin >> choice;
  if(choice == 'M' || choice == 'm'){
    print_menu();
  } else{
    cout << "Invalid choice" << endl;

  }
}
