#include<iostream>
#include<string.h>
using namespace std;
int main(){

    string newstr;
    string str2=gets>>newstr;

    puts<<str2;

    // ERROR
/*
    practice/"keywordgetsStringInput
keywordgetsStringInput.cpp: In function ‘int main()’:
keywordgetsStringInput.cpp:7:17: error: ‘gets’ was not declared in this scope
     string str2=gets>>newstr;
                 ^~~~
keywordgetsStringInput.cpp:7:17: note: suggested alternative: ‘fgets’
     string str2=gets>>newstr;
                 ^~~~
                 fgets
keywordgetsStringInput.cpp:9:9: error: no match for ‘operator<<’ (operand types are ‘int(const char*)’ and ‘std::__cxx11::string {aka std::__cxx11::basic_string<char>}’)
     puts<<str2;
     ~~~~^~~~~~
In file included from /usr/include/c++/7/string:52:0,
                 from /usr/include/c++/7/bits/locale_classes.h:40,
                 from /usr/include/c++/7/bits/ios_base.h:41,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iostream:39,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/bits/basic_string.h:6284:5: note: candidate: template<class _CharT, class _Traits, class _Alloc> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)
     operator<<(basic_ostream<_CharT, _Traits>& __os,
     ^~~~~~~~
/usr/include/c++/7/bits/basic_string.h:6284:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<_CharT, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/bits/ios_base.h:46:0,
                 from /usr/include/c++/7/ios:42,
                 from /usr/include/c++/7/ostream:38,
                 from /usr/include/c++/7/iostream:39,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/system_error:217:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::error_code&)
     operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __e)
     ^~~~~~~~
/usr/include/c++/7/system_error:217:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<_CharT, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:497:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, _CharT)
     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
     ^~~~~~~~
/usr/include/c++/7/ostream:497:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<_CharT, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:502:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, char)
     operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
     ^~~~~~~~
/usr/include/c++/7/ostream:502:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<_CharT, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:508:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, char)
     operator<<(basic_ostream<char, _Traits>& __out, char __c)
     ^~~~~~~~
/usr/include/c++/7/ostream:508:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<char, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:514:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, signed char)
     operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
     ^~~~~~~~
/usr/include/c++/7/ostream:514:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<char, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:519:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, unsigned char)
     operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
     ^~~~~~~~
/usr/include/c++/7/ostream:519:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<char, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:539:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*)
     operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
     ^~~~~~~~
/usr/include/c++/7/ostream:539:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<_CharT, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/ostream:693:0,
                 from /usr/include/c++/7/iostream:39,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/bits/ostream.tcc:321:5: note: candidate: template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const char*)
     operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
     ^~~~~~~~
/usr/include/c++/7/bits/ostream.tcc:321:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<_CharT, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:556:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)
     operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
     ^~~~~~~~
/usr/include/c++/7/ostream:556:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<char, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:569:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const signed char*)
     operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
     ^~~~~~~~
/usr/include/c++/7/ostream:569:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<char, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:574:5: note: candidate: template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const unsigned char*)
     operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
     ^~~~~~~~
/usr/include/c++/7/ostream:574:5: note:   template argument deduction/substitution failed:
keywordgetsStringInput.cpp:9:11: note:   mismatched types ‘std::basic_ostream<char, _Traits>’ and ‘int(const char*)’
     puts<<str2;
           ^~~~
In file included from /usr/include/c++/7/iostream:39:0,
                 from keywordgetsStringInput.cpp:1:
/usr/include/c++/7/ostream:682:5: note: candidate: template<class _Ostream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_ostream<_Ostream>, std::__is_insertable<typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type, const _Tp&, void> >::value, typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type>::type std::operator<<(_Ostream&&, const _Tp&)
     operator<<(_Ostream&& __os, const _Tp& __x)
     ^~~~~~~~
/usr/include/c++/7/ostream:682:5: note:   template argument deduction/substitution failed:
/usr/include/c++/7/ostream: In substitution of ‘template<class _Ostream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_ostream<_Ostream>, std::__is_insertable<typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type, const _Tp&, void> >::value, typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type>::type std::operator<<(_Ostream&&, const _Tp&) [with _Ostream = int (&)(const char*); _Tp = std::__cxx11::basic_string<char>]’:
keywordgetsStringInput.cpp:9:11:   required from here
/usr/include/c++/7/ostream:682:5: error: no type named ‘type’ in ‘struct std::enable_if<false, void

*/
    return 0;
}