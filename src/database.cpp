#include "include/database.h"

void Database::write(vector<string> list){
  ofstream db;
  db.open("db/lists.sl");
  if(db.is_open()){

    // db << "1\n2\n3\n4\n5\n6\n7\n8\n9\n10\n";
    for(unsigned int i = 0; i < list.size(); i++){
      db << i << " - " << list[i] << endl;
    }

  
} else{
  cout << "Error opening file" << endl;
}
  db.close();      
}


void Database::read(){
  ifstream db;
  string line;
  db.open("db/lists.sl");
  if(db.is_open()){

    while(getline(db, line, '\n')){
      cout<< line << endl;
    }
} else{
  cout << "Error reading file" << endl;
}
  db.close();      

}