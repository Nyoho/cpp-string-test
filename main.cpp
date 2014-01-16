#include <iostream>

using namespace std;
using std::u16string;

extern std::string to_u8string(const std::u16string& s);
extern std::string to_u8string(const std::u32string& s);

extern std::u16string to_u16string(const std::string& s);
extern std::u16string to_u16string(const std::u32string& s);

extern std::u32string to_u32string(const std::string& s);
extern std::u32string to_u32string(const std::u16string& s);

std::string to_u8string(const std::u16string& s)
{
  std::string st;
  return st;
}

int main (int argc, char** argv)
{
  std::u16string s16;
  cout << to_u8string(s16) << endl;
  cout << "ふが" << endl;
  return 0;
}

