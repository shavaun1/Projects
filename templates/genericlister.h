#ifndef GENERICLIST_CPP
#define GENERICLIST_CPP
#include <iostream>
#include <cstdlib>
#include "genericlist.h"

using namespace std;

namespace listasvitch
{
  template<class ItemType>
    GenericList<ItemType>::GenericList(int max): maxLength(max), currentLength(0)
  {
    item = new ItemType[max];
  }

  template<class ItemType>
    GenericList<ItemType>::~GenericList()
    {
      delete [] item;
    }

  template<class ItemType>
    int GenericList<ItemType>::lenght() const
    {
      return (currentLength);
    }

  template<class ItemType>
    void GenericList<ItemType>::add(ItemType newItem)
    {
      if ( full() )
      {
        cout<<"Error: adding to a full list.\n";
        exit(1);
      }
      else
      {
        item[currentLength] = newItem;
        currentLength = currentLength + 1;
      }
    }

  template<class ItemType>
    bool GenericList<ItemType>::full() const
    {
      return(currentLength = maxLength);
    }

  template<class ItemType>
    void GenericList<ItemType>::erase()
    {
      currentLength = 0;
    }
}
#endif
