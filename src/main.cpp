#include "include/list.h"




int main(int arg_count, char *args[]) {
 
  if(arg_count > 1){
    List simleList;
    simleList.name = string(args[1]);
    simleList.print_menu(); 

  }  else{
    cout<< "User not supplied. exiting the program " <<endl;
  }
    return 0;
}

  