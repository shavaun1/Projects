#ifndef WAVE_FLOW
#define WAVE_FLOW
#include<complex>
#include<vector>

using std::complex; using std::vector;


using cd = complex<double>;
constexpr size_t N{128};
constexpr int HEIGHT {10};
using FFTVeC = vector<cd>;


void fft(FFTVeC& a);
void print_time_domain_graph(const FFTVeC& a);
void print_fft_vertical_color(const FFTVeC& a);

#endif

