#if __cplusplus >= 201703L
#include <optional>
#include <string_view>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <algorithm>
#include <array>
#include <bit>
#include <bitset>
#include <concepts>
#include <functional>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <numbers>
#include <numeric>
#include <ranges>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <utility>
// #include <atomic>
// #include <ratio>
// #include <scoped_allocator>
// #include <typeindex>
// #include <compare>
// #include <span>
// #include <source_location>
// #include <version>
#endif

#if __cplusplus > 202002L
// #include <expected>
// #include <stdatomic.h>
#if __cpp_impl_coroutine
// # include <coroutine>
#endif
#endif

#if _GLIBCXX_HOSTED
// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <ciso646>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
// #include <cerrno>
// #include <cfloat>
// #include <clocale>
// #include <csetjmp>
// #include <csignal>
// #include <cstdarg>
// #include <cstddef>
// #include <cstring>
// #include <ctime>
// #include <cwchar>
// #include <cwctype>

#if __cplusplus >= 201103L
// #include <ccomplex>
// #include <cfenv>
// #include <cinttypes>
// #include <cstdalign>
// #include <cstdbool>
#include <cstdint>
// #include <ctgmath>
// #include <cuchar>
#endif

// C++
// #include <complex>
#include <deque>
#include <exception>
// #include <fstream>
#include <functional>
#include <iomanip>
// #include <ios>
// #include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
// #include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
// #include <stdexcept>
// #include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
// #include <atomic>
#include <chrono>
// #include <codecvt>
// #include <condition_variable>
// #include <forward_list>
// #include <future>
#include <initializer_list>
// #include <mutex>
#include <random>
// #include <ratio>
// #include <regex>
// #include <scoped_allocator>
// #include <system_error>
// #include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
// #include <shared_mutex>
#endif

#if __cplusplus >= 201703L
// #include <any>
// #include <charconv>
// #include <execution>
// #include <filesystem>
#include <optional>
// #include <memory_resource>
#include <variant>
#endif

#if __cplusplus >= 202002L
// #include <barrier>
#include <bit>
// #include <compare>
#include <concepts>
#include <format>
#include <numbers>
#include <ranges>
// #include <span>
// #include <stop_token>
// #include <source_location>
// #include <syncstream>
#endif

#if __cplusplus > 202002L
// #include <expected>
#include <generator>
#include <print>
#include <spanstream>
#if __has_include(<stacktrace>)
#include <stacktrace>
#endif
// #include <stdatomic.h>
// #include <stdfloat>
#endif

#if __cplusplus > 202302L
// #include <text_encoding>
#endif

#endif // HOSTED
