#ifndef BOX_H
#define BOX_H
#include<iostream>
#include<iomanip>

class Box
{
  private:
    double length {1.0};
    double width{1.0};
    double height{1.0};

  public:
    //Constructors
    Box(double lv, double wv, double hv):length{lv}, width{wv},height{hv}{}
    Box() = default;

    double volume() const{return length * width*height;}

    //Accessors
    double getLength() const{return length;}
    double getWidth()  const{return width;}
    double getHeight() const{return height;}

};

//Stream output for Box objects
inline std::ostream& operator<<(std::ostream& stream, const Box& box)
{
  stream << " Box(" <<std::setw(2) <<box.getLength() <<','
                    <<std::setw(2) << box.getWidth() << ','
                    <<std::setw(2) <<box.getHeight() << ')';
  return stream;
}

#endif
