#include "include/list.h"
#include "include/database.h"



int main(int arg_count, char *args[]) {
  Database db;
  List simleList;
 
  if(arg_count > 1){
    simleList.name = string(args[1]);
    simleList.print_menu(); 
    db.write(simleList.list);
    db.read();

  }  else{
    cout<< "User not supplied. exiting the program " <<endl;
  }
    return 0;
}
 
  