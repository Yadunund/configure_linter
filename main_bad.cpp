#include <iostream>

// cuddle brace for namespace and comment at closing

namespace rmf_literals {

// m -> meters
// km -> kilometers

} // namespace rmf_literals

// multiple inheritance
class Dog : public Quadruped, public LoudAnimal { };

class animal // UpperCamelCase required
{
public:

  void teleport(double x, double y);

private:
  std::unique_ptr<Walker> walker;
  std::unique_ptr<NoiseMaker> noise_maker;
};

// class

class snake_case
{
public:

  snake_case(Foo foo, Bar bar)
  : _foo(foo),
    _bar(bar),
    _baz(Baz(foo, bar))
  {
  }

  /// This is an example function
  ///
  /// And here is a longer description blah blah blah
  ///
  /// \param[in] in_value
  ///   It takes in a value
  ///
  /// \param[out] out_value
  ///   It puts out a value
  ///
  /// \return some result
  ResultType snake_case_member_functions(
      InputValue in_value,
      OutputValue& out_value) const;

 bool CamelCaseMemberFunction(int n);

private:
  int not_lead_with_underscore;

};


// struct
struct StructName
{
  SomeClass some_class;
  int int_field;
  double double_field;
};


// control statements

if (some_condition && other_condition)
  foo();

for (std::size_t i = 0; i < num; ++i)
{
}

// assignment operator

bool variable = value + other_value*factor;
std::vector<Foo<A>> a;

// pointers
Foo* foo;
const Foo* foo;

// template
template<typename Iter>
class Foo
{
public:
  Iter bar();
};

// switch case
switch (value)
{
  case Value1: foo(); break;
  case Value2: bar(); break;
}

switch (value)
{
  case Value1:
  {
    foo();
    break;
  }

  case Value2:
  {
    bar();
    break;
  }
}

// enum
class EnumType
{
  enum 
  {
    Enum1,
    Enum2,
    Enum3
  };
}
