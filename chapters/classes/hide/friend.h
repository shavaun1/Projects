#pragma once

class Count
{
  friend void setX(Count& c, int value);
  public:
  int getX() const
  {
    return m_x;
  }

  private:
  int m_x{0};

};

//void modifyX(Count& c, int value)
//{
  //c.m_x = value;
//}
