#include<iostream>
using namespace std;

int main()
{
  int i, score[5], max;

  cout<<"Enter 5 scores: \n";

  cin >> score[0];
  max = score[0];
  for(i = 1; i < 5; i++)
  {
    cin>> score[i];
    if(score[i] > max)
      max = score[i];
  }

  cout<<"The higest score is "<< max << endl
    <<"The scores and their\n"
    <<"differences from the higest are: \n";
  for(i = 0; i < 5; i++)
    cout<< score[i] << " off by "
      <<(max - score[i]) << endl;
  return 0;
}
