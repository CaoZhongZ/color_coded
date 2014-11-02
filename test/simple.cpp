#include <iostream>
#include <string>

struct foo
{
  void work()
  { }

  char const * name{ "jeaye" };
  std::size_t age{ std::string{name}.size() };
  static long count;
};

template <typename T>
class bar
{
  public:
    bar()
    { }
    bar(int const)
    { }

    virtual T spam() const
    { return T{}; }
};

enum class kitten
{
  meow,
  purr
};

typedef kitten feline;
using cat = kitten;

union meowzers
{
  feline f;
  cat c;
};

using std::swap;

/* Oh, excellent. */
int main()
{
  foo f;
  f.name = "jeaye";
  f.age = 22;
  f.work();
  auto const k(kitten::meow);
  std::cout << static_cast<int>(k) << std::endl;
}
