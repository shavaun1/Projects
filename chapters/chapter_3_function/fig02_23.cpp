//Roll a six-sided die 6000 times

#include<iostream>
#include<format>
#include<random>

using std::endl; using std::cout; using std::default_random_engine; using std::uniform_int_distribution; using std::format;

int main()
{
  default_random_engine engine{};
  uniform_int_distribution randomDie{1,6};

  int frequency1{0}, frequency2{0}, frequency3{0}, frequency4{0},
      frequency5{0}, frequency6{0};

  for(int roll{1}; roll <= 60'000'000; ++roll){

    switch(const int face{randomDie(engine)}){
      case 1:
        ++frequency1;
        break;
      case 2:
        ++frequency2;
        break;
      case 3:
        ++frequency3;
        break;
      case 4:
        ++frequency4;
        break;
      case 5:
        ++frequency5;
        break;
      case 6:
        ++frequency6;
        break;
      default:
        cout<<"should never get here!";

    }
  }
  cout<<format ("{:>4}{:>13}\n",  "Face", "Frequency");
   cout <<format("{:>4d}{:13d}\n",1, frequency1)
    <<format("{:>4d}{:>13d}\n",2,frequency2)
    <<format("{:>4d}{:>13d}\n",3,frequency3)
    <<format("{:>4d}{:>13d}\n",4,frequency4)
    <<format("{:>4d}{:>13d}\n",5,frequency5)
    <<format("{:>4}{:>13d}\n",6,frequency6)<<endl;

  return 0;
}

