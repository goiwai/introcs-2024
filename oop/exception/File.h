#ifndef FILE_H_
#define FILE_H_

#include <fstream>
#include <string>

#ifdef DEBUG
#define debug_(msg) \
  std::cerr << __DATE__ << " " << __TIME__ << " " \
            << "msg=\"" << msg << "\" " \
            << "at line: " << __LINE__ << " " \
            << "file: " << __FILE__ << std::endl
#else
#define debug_(msg)
#endif

class File {
  public:
    // constructor
    File(std::ios::iostate ifs_except = std::ios::failbit | std::ios::badbit, std::ios::iostate ofs_except = std::ios::failbit | std::ios::badbit);
    // iostate values:
    //   eofbit: End-of-File reached on input operation
    //   failbit: Logical error on i/o operation,
    //     e.g.:
    //       when open/close filed,
    //       when finishing the read operation without using the full size of the read buffer
    //   badbit: Read/writing error on i/o operation
    //   goodbit: No errors (zero value iostate)
    //   std::ios::fail() is equivalent to (std::ios::failbit | std::ios::badbit)
    //   std::ios::bad() is equivalent to (std::ios::badbit)

    // destructor
    ~File();

  public:
#if CXXSTD >= 17
    void Copy(const std::string &ifile, const std::string &ofile) noexcept(false);
    // Potential exceptions since C++11
    //   noexcept; or noexcept(true);
    //     declares to not throw any exceptions.
    //   noexcept(false); or without noexcept
    //     declares the function may throw exceptions.
#else
    void Copy(const std::string &ifile, const std::string &ofile) throw(std::ios::failure);
    // Dynamic exception specification
    //   deprecated in C++11
    //   removed in C++17
#endif

  private:
    // data members
    std::ifstream ifs_;
    std::ofstream ofs_;
};

#endif // FILE_H_
