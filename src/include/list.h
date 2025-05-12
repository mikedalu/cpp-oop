#include <iostream>
#include <vector>
#include <string>
using namespace std;
class List {
  private:

  protected:

  public:
    List(){
      cout << "List created" << endl;
    }
    ~List(){
      cout << "Destructor called" << endl;  
    }
    vector<string> list;
    string name;
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    void print_choice();
};