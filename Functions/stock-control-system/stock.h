
extern int level1, level2, level3;

inline void init_levels()
  //sets all stock levels to 0.
{
  level1 = level2 = level3 = 0;
}

char get_option();
//Accepts menu option selected by user.

void set_levels();
//set stock levels to values supplied by user.
//no value to be return, so void specified
//as return type.

int get_level(int item);
//Return current level of specified stock item.

enum boolean{FALSE, TRUE};

boolean changes_level(int item, int level);
//changes current level of specified item
//to specified value.
//Return TRUE if changes is possible and FALSE
//if an invalid number is specified.



