C++ の勉強
==============

## 概要

`Makefile` の

``` sh
CPPFLAGS += -Wall -I/usr/include/c++/4.2.1
LDFLAGS += -std=c++11 -stdlib=libstdc++
```

1. ここで `-I/usr/include/c++/4.2.1` を外すとエラーが取れる。
2. `-stdlib=libstdc++` はつけてもつけなくてもエラー。
3. `-mmacosx-version-min=10.8` としてもエラー
3. `-mmacosx-version-min=10.9` (-I と libstdc++ なし)ならエラーが取れる

 
```
#include <ext/codecvt_specializations.h>
```
がしたいので /usr/include/c++/4.2.1/ を読んで欲しい。


## エラー

```
main.cpp:4:12: error: no member named 'u16string' in namespace 'std'
using std::u16string;
      ~~~~~^
main.cpp:6:43: error: no type named 'u16string' in namespace 'std'
extern std::string to_u8string(const std::u16string& s);
                                     ~~~~~^
main.cpp:7:43: error: no type named 'u32string' in namespace 'std'
extern std::string to_u8string(const std::u32string& s);
                                     ~~~~~^
main.cpp:9:13: error: no type named 'u16string' in namespace 'std'
extern std::u16string to_u16string(const std::string& s);
       ~~~~~^
main.cpp:10:13: error: no type named 'u16string' in namespace 'std'
extern std::u16string to_u16string(const std::u32string& s);
       ~~~~~^
main.cpp:10:47: error: no type named 'u32string' in namespace 'std'
extern std::u16string to_u16string(const std::u32string& s);
                                         ~~~~~^
main.cpp:12:13: error: no type named 'u32string' in namespace 'std'
extern std::u32string to_u32string(const std::string& s);
       ~~~~~^
main.cpp:13:13: error: no type named 'u32string' in namespace 'std'
extern std::u32string to_u32string(const std::u16string& s);
       ~~~~~^
main.cpp:13:47: error: no type named 'u16string' in namespace 'std'
extern std::u32string to_u32string(const std::u16string& s);
                                         ~~~~~^
main.cpp:15:36: error: no type named 'u16string' in namespace 'std'
std::string to_u8string(const std::u16string& s)
                              ~~~~~^
main.cpp:23:8: error: no type named 'u16string' in namespace 'std'
  std::u16string s16;
  ~~~~~^
11 errors generated.
make: *** [main] Error 1
```
