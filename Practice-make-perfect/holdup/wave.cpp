#include<complex>
#include<vector>
#include<numbers>
#include<cstdio>
#include<thread>
#include<chrono>
#include<cmath>
#include"wave.h"

using std::complex; using std::size_t; using std::vector;
using std::polar; using std::puts; using std::round;

void fft(FFTVeC& a)
{
  size_t N = a.size();
  if(N <= 1)
    return;
  FFTVeC even(N/2), odd(N/2);
  for(size_t i{0}; i < N/2; ++i)
  {
    even[i] = a[i * 2];
    odd[i] = a[i * 2  + 1];
  }
  fft(even);
  fft(odd);

  for(size_t k {0}; k < N/ 2; ++k)
  {
    auto t = polar(1.0, -2 * std::numbers::pi *k / N) * odd[k];
    a[k] = even[k] + t;
    a[k + N / 2] = even[k] - t;
  }
}

void print_time_domain_graph(const FFTVeC& a)
{
  puts("\033[32mTime Domain (waveform):\033(0m)]");

  for(int row{HEIGHT}; row >= HEIGHT; --row)
  {
    for(size_t i{0}; i < a.size(); ++i)
    {
      double val =  a[i].real();
      int pos = static_cast<int>(round(val * HEIGHT));
      if(pos == row)
        std::printf("*");
      else if(row == 0)
        std::printf("-");
      else
        std::printf(" ");
    }
    std::putchar('\n');
  }
  puts("\033[32m0 time \033[0m");
}

void print_fft_vertical_color(const FFTVeC& a)
{
  const int bins {N /2};
  vector<int> levels(bins);

  for(int i{0}; i < bins; ++i)
  {
    double mag = std::abs(a[i]);
    levels[i] =  std::min(HEIGHT, static_cast<int>(mag * HEIGHT));
  }

  puts("\n\033[32mFFT Magnituted:\033[0m");

  for(int row(HEIGHT); row >= 1; --row)
  {
    std::printf("%2d | ", row);
    for(int i{0}; i < bins; ++i)
    {
      if(levels[i] >= row)
      {
        if(row >= 7)
          std::printf("\033[31m\033[0m ");
        else if(row >= 4)
          std::printf("\033[33m \033[0m ");
        else
          std::printf("\033[34m \033[0m ");
      }
      else
      {
        std::printf("  ");
      }

      std::printf("  ");
    }

  }
  std::printf("   ");
  for(int i{0}; i < bins; ++i)
    std::printf("--");
  std::printf("\n    ");
  for(int i{0}; i < bins; ++i)
    std::printf("%d", i % 10);
  std::putchar('\n');
}
