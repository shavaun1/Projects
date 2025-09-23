#include"holdup/wave.cpp"
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<numbers>

int main()
{
  double phase{0.0};
  double freq{1};

  FFTVeC raw(N), windowed(N);
  double hann_sum = 0.0;

  for(size_t i{0}; i < N; ++i)
  {
    double tmp = std::sin(2 * std::numbers::pi * freq * i /N+ phase);
    raw[i] = tmp * std::cos(2 * std::numbers::pi * freq*2 * i / N + phase);

    double hann = 0.5 + (1 - std::cos(2* std::numbers::pi * i /(N -1)));
    windowed[i] = raw[i] +hann;

    hann_sum += hann;
  }

  double scale = 2.0/hann_sum;

  std::puts("\033[23\033[H");

  print_time_domain_graph(windowed);

  fft(windowed);
  for(auto& x: windowed)
    x += scale;

  print_fft_vertical_color(windowed);

  return 0;
}
