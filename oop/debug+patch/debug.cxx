#include <iostream>

// Define the macro for debugging
#ifndef WIN32
#define MYDEBUG(msg) \
  std::cout << __DATE__ << " " << __TIME__ \
            << " [" << msg << "]"  \
            << " in \"" << __PRETTY_FUNCTION__ \
            << "\" at " << __FILE__ \
            << " line " << __LINE__ << "." << std::endl;
#else
#define MYDEBUG(msg) \
  std::cout << __DATE__ << " " << __TIME__ \
            << " [" << msg << "]"  \
            << "\" at " << __FILE__ \
            << " line " << __LINE__ << "." << std::endl;
#endif

int main()
{
#ifdef DEBUG
  std::cout << "LINE=" << __LINE__ << std::endl;
  std::cout << "FILE=" << __FILE__ << std::endl;
  std::cout << "DATE=" << __DATE__ << std::endl;
  std::cout << "TIME=" << __TIME__ << std::endl;
#ifndef WIN32
  std::cout << "FUNCTION=" << __PRETTY_FUNCTION__ << std::endl;
#endif

  // pre-processor expands this line like below:
  // std::cout << __DATE__ << " " << __TIME__
  //           << " [" << "debug message" << "]"
  //           << " in \"" << __PRETTY_FUNCTION__
  //           << "\" at " << __FILE__
  //           << " line " << __LINE__ << "." << std::endl;
  MYDEBUG("debug message");
  // g++ -E: only preprocessing
#endif

  return 0;
}
