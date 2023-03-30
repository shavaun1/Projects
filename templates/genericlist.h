#ifndef GENERICLIST_H
#define GENERICLIST_H
#include <iostream>
using namespace std;

namespace listasvitch
{
  template<class ItemType>
    class GenericList
    {
      public:
        GenericList(int max);
        ~GenericList();

        int lenght() const;

        void add(ItemType newItem);
        bool full() const;
        void erase();
        friend ostream& operator <<(ostream& outs, const GenericList<ItemType>& theList)
        {
          for(int i = 0; i < theList.currentLength; i++)
            outs << theList.item[i] << endl;
          return outs;
        }

      private:
        ItemType *item;
        int maxLength;
        int currentLength;
    };
}
#endif
